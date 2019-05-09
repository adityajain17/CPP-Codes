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
node *prev=NULL;
class trees
{
	public:
	node *root;
	trees()
	{
		root=NULL;
	}
	node* create(node *);
	void indisplay(node *);
	void check_bst(node*);
};
int main()
{
	trees t1;
	t1.root=t1.create(t1.root);
	cout<<"TREE DISPLAYED IN INORDER FORM IS : "<<endl;
	t1.indisplay(t1.root);
	t1.check_bst(t1.root);
	if(flag)
	{
		cout<<"BST !! "<<endl;
	}
	else
	{
		cout<<"NOT A BST : "<<endl;
	}
}

node * trees::create(node *root)
{
	char ch;
	root=new node;
	cout<<"Enter data "<<endl;
	cin>>root->data;
	cout<<"Is there a left child to "<<root->data<<" "<<endl;
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
		root->left=create(root->left);
	}
	else
	{
		root->left=NULL;
	}
	cout<<"Is there a right child to "<<root->data<<" "<<endl;
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
		root->right=create(root->right);
	}
	else
	{
		root->right=NULL;
	}
	return root;
}


void trees::indisplay(node *root)
{
	if(root==NULL)
	{
		return;
	}
	indisplay(root->left);
	cout<<root->data<<" ";
	indisplay(root->right);
}

void trees::check_bst(node *r)
{
	if(r==NULL)
	{
		return;
	}
	check_bst(r->left);
	if(prev!=NULL)
	{
		if(prev->data>=r->data)
		flag=false;
	}
	prev=r;
	check_bst(r->right);
}
