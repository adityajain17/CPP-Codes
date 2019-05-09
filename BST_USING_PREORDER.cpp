//This program is to make a bst from the given preorder traversal
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
	node *build(int[],int,int);
	void indisplay(node *);
	int lsearch(int[],int,int,int);
};

int main()
{
	trees t1;
	int size=0,i=0;
	cout<<"Enter size : "<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter data : "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	t1.root=t1.build(arr,0,size-1);
	cout<<"The inorder is : "<<endl;
	t1.indisplay(t1.root);
	cout<<endl;
}

int trees::lsearch(int ar[],int key,int start,int end)
{
	int i=start;
	for(i=start;i<=end;i++)
	{
		if(ar[i]>key)
		{
			return i;
		}
	}
}

node * trees::build(int ar[],int start,int end)
{
	if(start>end)
	{
		return NULL;
	}
	node *t=new node;
	t->data=ar[c++];
	t->left=NULL;
	t->right=NULL;
	int j=lsearch(ar,t->data,start+1,end);
	t->left=build(ar,c,j-1);
	t->right=build(ar,j,end);
	return t;
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
