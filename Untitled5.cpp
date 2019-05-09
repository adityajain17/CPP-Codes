//This program is to check if all internal nodes of a bst have one child 
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
	void indisplay(node *);
	bool checkone(node *);
};

int main()
{
	trees t1;int size,i=0;bool res=true;
	cout<<"Enter size : "<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter data : "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
		t1.root=t1.insert(t1.root,arr[i]);
	}
	res=t1.checkone(t1.root);
	if(res)
	{
		cout<<"YES "<<endl;
	}
	else
	{
		cout<<"NO "<<endl;
	}
	t1.indisplay(t1.root);
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

bool trees::checkone(node *r)
{
	if(r!=NULL)
	{
		if(r->left==NULL&&r->right!=NULL)
		{
			return(checkone(r->right));
		}
		else if(r->right==NULL&&r->left!=NULL)
		{
			return(checkone(r->left));
		}
		else if(r->left==NULL&&r->right==NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
