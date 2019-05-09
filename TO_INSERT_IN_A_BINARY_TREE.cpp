#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
int flag=0,c=0;
class trees
{
	public:
	node *root;
	trees()
	{
		root=NULL;
	}
	void indisplay(node *);
	void insert(node *,int);
	int height(node *);
	void tblr(node*,int,int);
	void print_nodes_in_a_level(node *,int,int);
	void required_level(node *,int);
	int temp(node *);
};
int main()
{
	trees t1;int d;int ch=1;
	cout<<t1.height(t1.root)<<endl;
	while(ch)
	{
		cout<<"Enter data : "<<endl;
		cin>>d;
		if(t1.height(t1.root)==-1)
		{
			node *r=new node;
			r->data=d;
			r->left=NULL;
			r->right=NULL;
			t1.root=r;
		}
		else
		{
			t1.insert(t1.root,d);
		}
		cout<<"Do you want to insert 1 for y and 0 for no : "<<endl;
		cin>>ch;
		cout<<"CURRENT INORDER : "<<endl;
		t1.indisplay(t1.root);
		cout<<endl;
		cout<<"CURRENT HEIGHT IS : "<<endl;
		cout<<t1.height(t1.root)<<endl;
		flag=0;
		
	}
	
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

void trees::insert(node *r,int da)
{
		int h=height(r);
		tblr(r,h,da);
		return;
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


void trees::tblr(node *root,int level,int d)
{
	int x=temp(root);
	print_nodes_in_a_level(root,x,d);
}


void trees::print_nodes_in_a_level(node *root,int level,int d)
{
	if(root==NULL)
	{
		return;
	}
	else if((root->left==NULL)||(root->right==NULL)&&(flag==0)&&(level==0))
	{
		cout<<"WE ARE IN INSERT FUNCTION : "<<endl;
		if(root->left==NULL&&flag==0&&level==0)
		{
			cout<<"LEFT INSERT : of : "<<root->data<<endl;
			node *r=new node;
			r->data=d;
			r->left=NULL;
			r->right=NULL;
			root->left=r;
			flag=1;
		}
		else if(flag==0&&level==0)
		{
			cout<<"RIGHT INSERT FUNCTION : of : "<<root->data<<endl;
			node *r=new node;
			r->data=d;
			r->left=NULL;
			r->right=NULL;
			root->right=r;
			flag=1;
		}
		return;
	}
	else
	{
		
			print_nodes_in_a_level(root->left,level-1,d);
			print_nodes_in_a_level(root->right,level-1,d);
	}
}

