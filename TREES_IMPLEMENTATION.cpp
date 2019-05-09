#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
}*root=NULL;
node* create(node *);
void indisplay(node *);
void predisplay(node *);
void postdisplay(node *);
int height(node *);
void print_nodes_in_a_level(node *,int);
int main()
{
	int level=0;
	root=create(root);
	cout<<"The tree displayed in inorder form is : "<<endl;
	indisplay(root);
	cout<<endl;
	cout<<"The tree displayed in preorder form is : "<<endl;
	predisplay(root);
	cout<<endl;
	cout<<"The tree displayed in postorder form is : "<<endl;
	postdisplay(root);
	cout<<endl;
	int x=height(root);
	cout<<"The height of the root is : "<<x<<endl;
	cout<<"Enter level : "<<endl;
	cin>>level;
	cout<<"The roots in that level are : "<<endl;
	print_nodes_in_a_level(root,level);
}
node *create(node *root)
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
void indisplay(node *root)
{
	if(root==NULL)
	{
		return;
	}
	indisplay(root->left);
	cout<<root->data<<" ";
	indisplay(root->right);
}
void predisplay(node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		predisplay(root->left);
		predisplay(root->right);
	}
}
void postdisplay(node *root)
{
	if(root!=NULL)
	{
		postdisplay(root->left);
		postdisplay(root->right);
		cout<<root->data<<" ";
	}
}
int height(node *root)
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
void print_nodes_in_a_level(node *root,int level)
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
