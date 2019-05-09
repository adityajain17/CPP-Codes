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
	node* del_leaf(node *,node *);
	node *ma(node *);
	node * del(node *,int);
};

int main()
{
	int x;char ch;
	trees t1;bool res;int key;
	while(1)
	{
		cout<<"Enter data : "<<endl;
		cin>>x;
		t1.root=t1.insert(t1.root,x);
		cout<<"Enter y to continue and n to stop : "<<endl;
		cin>>ch;
		if(ch!='y')
		break;
	}
	cout<<"Tree displayed in inorder form is : "<<endl;
	t1.indisplay(t1.root);
	cout<<endl;
	t1.root=t1.del_leaf(t1.root,t1.root);
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


node *trees::del_leaf(node *r,node *r1)
{
	if(r==NULL)
	{
		return NULL;
	}
	else if(r->left==NULL&&r->right==NULL)
	{
		r1=del(r1,r->data);
		return NULL;
	}
	del_leaf(r->left,r1);
	del_leaf(r->right,r1);
	return r1;
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


