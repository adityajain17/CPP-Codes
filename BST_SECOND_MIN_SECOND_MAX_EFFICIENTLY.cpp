//This program is to find the second largest element in BST in an efficient way
#include<iostream>
#include<math.h>
int c=0;
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
	void smax(node *);
	void smin(node *);
};

int main()
{
	trees t1;
	int x;char ch;
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
	t1.smax(t1.root);
	cout<<endl;
	c=0;
	t1.smin(t1.root);
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

void trees::smax(node *r)
{
	if(r==NULL||c>=2)
	{
		return;
	}
	smax(r->right);
	c++;
	if(c==2)
	{
		cout<<"SECOND MAX IS : "<<r->data<<endl;
		return;
	}
	smax(r->left);
}

void trees::smin(node *r)
{
	if(r==NULL||c>=2)
	{
		return;
	}
	smin(r->left);
	c++;
	if(c==2)
	{
		cout<<"SECOND MIN IS : "<<r->data<<endl;
		return;
	}
	smin(r->right);
}
