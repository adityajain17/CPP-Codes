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
	void common(node *,node *);
};

int main()
{
	int x;char ch;
	trees t1;bool res;int key;trees t2;
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
	cout<<"Enter data for tree 2 : "<<endl;
	while(1)
	{
		cout<<"Enter data : "<<endl;
		cin>>x;
		t2.root=t2.insert(t2.root,x);
		cout<<"Enter y to continue and n to stop : "<<endl;
		cin>>ch;
		if(ch!='y')
		break;
	}
	cout<<"Tree displayed in inorder form is : "<<endl;
	t2.indisplay(t2.root);
	cout<<"The common elements are : "<<endl;
	t1.common(t1.root,t2.root);
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

void trees::common(node *r1,node *r2)
{
	if(r1==NULL||r2==NULL)
	{
		return;
	}
	else
	{
		if(r1->data==r2->data)
		cout<<r1->data<<" ";
	}
	common(r1->left,r2->left);
	common(r1->right,r2->right);
}
