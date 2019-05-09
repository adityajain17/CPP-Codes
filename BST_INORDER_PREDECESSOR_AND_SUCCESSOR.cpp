#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
node *prev=NULL;
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
	void inosu(node *,int);
	void inopr(node *,int);
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
	int key;
	cout<<"Enter key : "<<endl;
	cin>>key;
	cout<<"The inorder predecessor is : "<<endl;
	t1.inopr(t1.root,key);	
	cout<<endl;
	prev=NULL;
	cout<<"Enter key : "<<endl;
	cin>>key;
	cout<<"The inorder successor is : "<<endl;
	t1.inosu(t1.root,key);
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

void trees::inopr(node*r,int key)
{
	if(r==NULL)
	{
		return;
	}
	inopr(r->left,key);
	if(prev!=NULL)
	{
		if(r->data==key)
		{
			cout<<prev->data;
			return;
		}
		else
		{
			prev=r;
		}
	}
	else
	{
		prev=r;
	}
	inopr(r->right,key);
}

void trees::inosu(node *r,int key)
{
	if(r==NULL)
	{
		return ;
	}
	inosu(r->left,key);
	if(prev!=NULL)
	{
		if(prev->data==key)
		{
			cout<<r->data;
			return;
		}
		else
		{
			prev=r;
		}
	}
	else
	{
		prev=r;
	}
	inosu(r->right,key);
}
