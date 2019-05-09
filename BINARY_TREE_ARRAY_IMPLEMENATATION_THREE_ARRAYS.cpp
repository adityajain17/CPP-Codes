//This program is to implement binary tree using three arrays
#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	char data;
	node *right;
	node *left;
};
class trees
{
	public:
	node *root;
	char *arr;
	int *lc;
	int *rc;
	trees(char *a,int *l,int *r,int size)
	{
		root=NULL;
		arr=new char[size];
		lc=new int [size];
		rc=new int [size];
		for(int i=0;i<size;i++)
		{
			*(arr+i)=*(a+i);
			*(lc+i)=*(l+i);
			*(rc+i)=*(r+i);
		}
	}
	node* insert(int);
	node *create(char *,int *,int *,int);
	void indisplay(node *);
};
int main()
{
	char a[]={'A','B','C','D','E','F','G','\0','\0','H'};
	int l[]={1,3,5,-1,9,-1,-1,-1,-1,-1};
	int r[]={2,4,6,-1,-1,-1,-1,-1,-1,-1};
	int sz=sizeof(a);
	trees t1(a,l,r,sz);
	t1.root=t1.insert(0);
	cout<<"Inorder form is : "<<endl;
	t1.indisplay(t1.root);
}

node* trees::insert(int index)
{
	root=create(arr,lc,rc,index);
	return root;
}

node * trees::create(char *a,int *l,int *r,int index)
{
	node *temp=NULL;
	if(index!=-1)
	{
		temp=new node;
		temp->left=create(a,l,r,*(l+index));
		temp->data=*(a+index);
		temp->right=create(a,l,r,*(r+index));	
	}
	return temp;
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
