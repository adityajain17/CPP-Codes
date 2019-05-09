#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
int index=0;
class trees
{
	public:
	node *root;
	trees()
	{
		root=NULL;
	}
	node* create(node *);
	void indisplay(node *,int[],int);
	int count(node *);
	void bstree(node *,int[],int);
	void inde(node *);
	
};
int main()
{
	trees t1;int i=0,j=0;int min=0,pos=0;int temp;
	t1.root=t1.create(t1.root);
	int size=t1.count(t1.root);
	int arr[size];
	cout<<"INORDER OF THE GIVEN TREE IS : "<<endl;
	t1.indisplay(t1.root,arr,0);
	i=0;j=0;
	for(i=0;i<size;i++)
	{
		min=arr[i];
		pos=i;
		for(j=i+1;j<size;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				pos=j;
			}
		}
		temp=arr[i];
		arr[pos]=temp;
		arr[i]=min;
	}
	index=0;
	t1.bstree(t1.root,arr,0);
	t1.inde(t1.root);	
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


void trees::bstree(node *root,int in[],int ind)
{
	if(root==NULL)
	{
		return;
	}
	bstree(root->left,in,ind);
	root->data=in[index];
	index=index+1;
	ind=index;
	bstree(root->right,in,ind);
}

void trees::inde(node *r)
{
	if(r==NULL)
	{
		return;
	}
	inde(r->left);
	cout<<r->data<<" ";
	inde(r->right);
}
void trees::indisplay(node *root,int in[],int ind)
{
	if(root==NULL)
	{
		return;
	}
	indisplay(root->left,in,ind);
	in[index]=root->data;
	index=index+1;
	ind=index;
	indisplay(root->right,in,ind);
}

int trees::count(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		return(1+count(root->left)+count(root->right));
	}
}
