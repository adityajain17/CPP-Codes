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
	void path(node *,int,int);
};
int pa1[20],pa2[20];int c1=0,c2=0;
int main()
{
	int x;char ch;int a,b;
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
	cout<<"Enter the values of a and b : "<<endl;
	t1.path(t1.root,a,1);
	t1.path(t1.root,b,2);
	int flag=0;
	for((int i=(c1>c2)?c1:c2);i>=0;i--)
	{
		flag=0;
		for((int j=(c1<c2)?c1:c2);j>=0;j--)
		{
			if
		}
	}
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

void trees::path(node *r,int key,int s)
{
	if(r==NULL)
	{
		return;
	}
	else if(key<r->data)
	{
		if(s==1)
		{
			pa1[c1]=r->data;
			c1++;
			path(r->left,key,s);
		}
		else
		{
			pa2[c2]=r->data;
			c2++;
			path(r->left,key,s);
		}
	}
	else if(key>r->data)
	{
		if(s==1)
		{
			pa1[c1]=r->data;
			c1++;
			path(r->right,key,s);
		}
		else
		{
			pa2[c2]=r->data;
			c2++;
			path(r->right,key,s);
		}
	}
	else
	{
		return;
	}
}
