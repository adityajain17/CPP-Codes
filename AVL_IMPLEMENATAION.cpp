//This program is to implement AVL Trees
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
	node *ll(node *);
	node *rr(node *);
	node *lr(node *);
	node *rl(node *);
	node *balance(node *);
	void indisplay(node *);
	int bal_fact(node *,node *);
	int height(node *);
	void tblr(node*,int);
	void print_nodes_in_a_level(node *,int);
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
	cout<<"The level order is : "<<endl;
	t1.tblr(t1.root,t1.height(t1.root));
	cout<<"Enter the element you want to delete : "<<endl;
	cin>>key;
	t1.root=t1.del(t1.root,key);
	cout<<"Level order after deleting the root is : "<<endl;
	t1.tblr(t1.root,t1.height(t1.root));
	cout<<"Inorder traversal after deleting the root is : "<<endl;
	t1.indisplay(t1.root);
}

node * trees::ll(node *x)
{
	node *y=x->left;
	x->left=y->right;
	y->right=x;
	return y;
}

node *trees::rr(node *x)
{
	node *y=x->right;
	x->right=y->left;
	y->left=x;
	return y;
}

node *trees::lr(node *x)
{
	node *y=x->left;
	node *z=y->right;
	y->right=z->left;
	z->left=y;
	x->left=z;
	x->left=z->right;
	z->right=x;
	return z;
}

node *trees::rl(node *x)
{
	node *y=x->right;
	node *z=y->left;
	y->left=z->right;
	z->right=y;
	x->right=z;
	x->right=z->left;
	z->left=x;
	return z;
}

node *trees::balance(node *r)
{
	int x=bal_fact(r->left,r->right);
	if(x>1)
	{
		x=bal_fact(r->left->left,r->left->right);
		if(x>=0)
		{
			r=ll(r);
		}
		else
		{
			r=lr(r);
		}
	}
	if(x<-1)
	{
		x=bal_fact(r->right->left,r->right->right);
		if(x<=0)
		{
			r=rr(r);
		}
		else
		{
			r=rl(r);
		}
	}
	return r;
}

int trees::bal_fact(node *r1,node *r2)
{
	return(height(r1)-height(r2));
}

int trees::height(node *r)
{
	if(r==NULL)
	{
		return(-1);
	}
	else
	{
		return(1+max(height(r->left),height(r->right)));
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
		r=balance(r);
	}
	else if(key>r->data)
	{
		r->right=insert(r->right,key);
		r=balance(r);
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

void trees::tblr(node *root,int level)
{
	int i=0;
	for(i=0;i<=level;i++)
	{
		cout<<"Nodes in level "<<i<<" are : ";
		print_nodes_in_a_level(root,i);
		cout<<endl;
	}
}


void trees::print_nodes_in_a_level(node *root,int level)
{
	if(root==NULL)
	{
		return;
	}
	else if(level==0)
	{
		cout<<root->data<<" ";
	}
	else
	{
		print_nodes_in_a_level(root->left,level-1);
		print_nodes_in_a_level(root->right,level-1);
	}
}


node * trees::del(node *cnode,int key)
{
	if(cnode==NULL)
	{
		return NULL;
	}
	else if(key<cnode->data)
	{
		cnode->left=del(cnode->left,key);
		cnode=balance(cnode);
	}
	else if(key>cnode->data)
	{
		cnode->right=del(cnode->right,key);
		cnode=balance(cnode);
	}
	else
	{
		if(cnode->left==NULL&&cnode->right==NULL)
		{
			delete cnode;
			return NULL;
		}
		else if(cnode->left==NULL&&cnode->right!=NULL)
		{
			node *t=cnode->right;
			delete cnode;
			return t;
		}
		else if(cnode->right==NULL&&cnode->left!=NULL)
		{
			node *t=cnode->left;
			delete cnode;
			return t;
		}
		else
		{
			node *t=ma(cnode->left);//Since we are using inorder predecessor so we take maximum in lt. sub-tree otherwise we need to take rt. sub-tree
			cnode->data=t->data;
			cnode->left=del(cnode->left,t->data);
			cnode=balance(cnode);
		}
	}
	return cnode;
}

node * trees::ma(node *t)
{
	while(t->right!=NULL)
	{
		t=t->right;
	}
	return t;
}
