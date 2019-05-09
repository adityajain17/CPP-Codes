//This program is to implement the bst when you have been given an inorder array or any set of numbers in a an array which might also be TBLR
#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
class trees
{
	public:
	node *root;
	trees()
	{
		root=NULL;
	}
	node *insert(node *,int);
	bool search(node *,int);
	void indisplay(node *);
	node *ma(node *);
	node * del(node *,int);
};
int main()
{
	int x,size;char ch;int i=0,res,key;
	cout<<"Enter the size of the array to store the data : "<<endl;
	cin>>size;
	int arr[size];
	trees t1;
	cout<<"Enter data : "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		t1.root=t1.insert(t1.root,arr[i]);
	}
	t1.indisplay(t1.root);
	cout<<endl;
	cout<<"Enter data to be searched : "<<endl;
	cin>>key;
	res=t1.search(t1.root,key);
	if(res)
	{
		cout<<"Element found !!! : "<<endl;
	}
	else
	{
		cout<<"Not found !!! : "<<endl;
	}
	cout<<"Enter the element you want to delete : "<<endl;
	cin>>key;
	t1.root=t1.del(t1.root,key);
	cout<<"INORDER AFTER DELETE IS : "<<endl;
	t1.indisplay(t1.root);
	/*while(1)
	{
		cout<<"Enter data : "<<endl;
		cin>>x;
		t1.root=t1.insert(t1.root,x);
		cout<<"Enter y to continue and n to stop : "<<endl;
		cin>>ch;
		if(ch!='y')
		break;
	}*/
	//cout<<"Tree displayed in inorder form is : "<<endl;
	//t1.indisplay(t1.root);
}
node * trees::insert(node *r,int key)
{
	if(r==NULL)
	{
		r=new node;
		r->data=key;
		r->left=NULL;
		r->right=NULL;
		return r;
	}
	else if(key<r->data)
	{
		r->left=insert(r->left,key);
	}
	else if(key>r->data)
	{
		r->right=insert(r->right,key);
	}
	else
	{
		return NULL;
	}
}
bool trees::search(node *root,int key)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==key)
	{
		return true;
	}
	else if(root->data>key)
	{
		return(search(root->left,key));
	}
	else
	{
		return(search(root->right,key));
	}
}
void trees::indisplay(node *r)
{
	if(r==NULL)
	{
		return;
	}
	else
	{
		indisplay(r->left);
		cout<<r->data<<" ";
		indisplay(r->right);
	}
}

node * trees::ma(node *t)
{
	while(t->right!=NULL)
	{
		t=t->right;
	}
	return t;
}


node * trees::del(node *root,int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	else if(key<root->data)
	{
		root->left=del(root->left,key);
	}
	else if(key>root->data)
	{
		root->right=del(root->right,key);
	}
	else
	{
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			return NULL;
		}
		else if(root->left==NULL)
		{
			node *t=root->right;
			delete root;
			return t;
		}
		else if(root->right==NULL)
		{
			node *t=root->left;
			delete root;
			return t;
		}
		else
		{
			node *t=ma(root->left);//Since we are using inorder predecessor so we take maximum in lt. sub-tree otherwise we need to take rt. sub-tree
			root->data=t->data;
			root->left=del(root->left,t->data);
		}
	}
	return root;
}

