//THis program is to construct an AVL Tree or not
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
int s=0,t=0;
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
	bool check_hbalanced(node *);
	int height(node *);
	void sum_greater(node *,int);
};

int main()
{
	int x;char ch;
	trees t1;int key;
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
	t1.sum_greater(t1.root,0);
	t1.indisplay(t1.root);
}

void trees::sum_greater(node *r,int x)
{
	if(r==NULL)
	{
		return ;
	}
	sum_greater(r->right,s);
	s=s+r->data;
	r->data=s;
	sum_greater(r->left,s);
}


int trees::height(node *root)
{
	if(root==NULL)
	{
		return(-1);
	}
	else
	{
		return(1+max(height(root->left),height(root->right)));
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


