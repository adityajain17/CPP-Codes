#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
int c=0,front=-1,rear=-1;node *q[20];int flag=0;int top=-1;node *stack[20];
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
	int height(node *);
	void tblr(node*,int,int);
	void print_nodes_in_a_level(node *,int,int);
	void required_level(node *,int);
	int temp(node *);
};
int main()
{
	trees t1;int x=0;
	t1.root=t1.create(t1.root);
	x=t1.temp(t1.root);
	cout<<"ADI : "<<x<<endl;
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

int trees::temp(node *r)
{
	int h=height(r);int i=0;
	for(i=0;i<=h;i++)
	{
		c=0;
		required_level(root,i);
		if(c<pow(2,i))
		{
			return i-1;
		}
	}
	return h;
	
}
void trees::required_level(node *root,int level)
{
	if(root==NULL)
	{
		return;
	}
	else if(level==0)
	{
		c=c+1;
	}
	else
	{
		required_level(root->left,level-1);
		required_level(root->right,level-1);
	}
}

