#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
bool flag=true;
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
	void avl_check(node *);
	int height(node *);
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
	t1.avl_check(t1.root);
	if(flag)
	{
		cout<<"AVL !! : "<<endl;
	}
	else
	{
		cout<<"NOT A AVL TREE : "<<endl;
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

void trees::avl_check(node *r)
{
	if(r==NULL)
	{
		return;
	}
	int x=height(r->left)-height(r->right);
	if(x!=-1&&x!=1&&x!=0)
	{
		cout<<r->data<<endl;
		flag=false;
	}
	avl_check(r->left);
	avl_check(r->right);
}
