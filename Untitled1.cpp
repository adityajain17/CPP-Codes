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
	node *ins(node*,int);
	node *pre(node *,int);
	node *real_pre(node *);
	node *real_ins(node *);
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
	cout<<"Enter the value whose inorder sucessor and predecessor you want : "<<endl;
	cin>>key;
	node *t=t1.pre(t1.root,key);
	if(t!=NULL)
	cout<<"The inorder predecessor is : "<<t->data<<" whose address is : "<<t<<endl;
	node *t2=t1.ins(t1.root,key);
	if(t2!=NULL)
	cout<<"The inorder successor is : "<<t2->data<<" whose address is : "<<t2<<endl;
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

node *trees::pre(node *r,int key)
{
	if(r==NULL)
	{
		return NULL ;
	}
	else if(key<r->data)
	{
		return(pre(r->left,key));
	}
	else if(key>r->data)
	{
		return(pre(r->right,key));
	}
	else
	{
		if(r->left==NULL)
		{
			cout<<"INODER PREDECESSOR NOT POSSIBLE : "<<endl;
			return NULL;
		}
		else
		{
			node *t=real_pre(r);
			return t;
		}
	}
}

node * trees::real_pre(node *r)
{
	node *temp=r->left;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	return(temp);
}

node *trees::ins(node *r,int key)
{
	if(r==NULL)
	{
		return NULL ;
	}
	else if(key<r->data)
	{
		return(ins(r->left,key));
	}
	else if(key>r->data)
	{
		return(ins(r->right,key));
	}
	else
	{
		if(r->right==NULL)
		{
			cout<<"INODER SUCCESSOR NOT POSSIBLE : "<<endl;
			return NULL;
		}
		else
		{
			node *t=real_ins(r);
			return t;
		}
	}
}

node *trees::real_ins(node *r)
{
	node *temp=r->right;
	while(temp->left!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->left;
	}
	return(temp);
}
