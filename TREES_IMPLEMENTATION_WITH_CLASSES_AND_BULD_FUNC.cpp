#include<iostream>
#include<math.h>
using namespace std;
int c=0;
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
	node* create(node *);
	int lsearch(int[],int,int,int);
	node * build_tree(int [],int [],int,int);
	void indisplay(node *);
	void predisplay(node *);
	void postdisplay(node *);
	int height(node *);
	void tblr(node*,int);
	void print_nodes_in_a_level(node *,int);
	void leaf_count(node *);
	void inte_count(node *);
};
int main()
{
	trees t1;
	int level=0;
	int pre[]={1,2,5,6,7,8,9,15,3,11,12};
	int in[]={6,7,5,2,8,9,15,1,11,3,12};
	int first=0;
	int last=10;
	t1.root=t1.build_tree(pre,in,first,last);
	cout<<"The tree displayed in inorder form is : "<<endl;
	t1.indisplay(t1.root);
	cout<<endl;
	cout<<"The tree displayed in preorder form is : "<<endl;
	t1.predisplay(t1.root);
	cout<<endl;
	cout<<"The tree displayed in postorder form is : "<<endl;
	t1.postdisplay(t1.root);
	cout<<endl;
	int x=t1.height(t1.root);
	cout<<"The height of the root is : "<<x<<endl;
	t1.tblr(t1.root,t1.height(t1.root));
	c=0;
	t1.leaf_count(t1.root);
	cout<<"The number of leaves are : "<<c<<endl;
	c=0;
	t1.inte_count(t1.root);
	cout<<"The number of internal nodes are : "<<c<<endl;
}
node * trees::build_tree(int pre[],int in[],int first,int last)
{
	if(first>last)
	{
		return NULL;
	}
	node *root=new node;
	root->right=NULL;
	root->left=NULL;
	root->data=pre[c++];
	int j=lsearch(in,first,last,root->data);
	root->left=build_tree(pre,in,first,j-1);
	root->right=build_tree(pre,in,j+1,last);
	return root;
}
int trees::lsearch(int in[],int first,int last,int currentdata)
{
	int i=0,j=0;
	for(i=first;i<=last;i++)
	{
		if(in[i]==currentdata)
		{
			return i;
		}
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
void trees::predisplay(node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		predisplay(root->left);
		predisplay(root->right);
	}
}
void trees::postdisplay(node *root)
{
	if(root!=NULL)
	{
		postdisplay(root->left);
		postdisplay(root->right);
		cout<<root->data<<" ";
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
void trees::leaf_count(node *root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left==NULL&&root->right==NULL)
	{
		c++;
	}
	else
	{
		leaf_count(root->left);
		leaf_count(root->right);
	}
}
void trees::inte_count(node *root)
{
		if(root==NULL)
	{
		return;
	}
	else
	{
		if(root->right!=NULL||root->left!=NULL)
		{
			++c;
		}
		inte_count(root->left);
		inte_count(root->right);
	}
}
