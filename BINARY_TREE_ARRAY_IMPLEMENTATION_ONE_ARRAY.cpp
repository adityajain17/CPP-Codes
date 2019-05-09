//This program is to implement the tree using one array
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
	trees(char *a,int size)
	{
		root=NULL;
		arr=new char[size];
		for(int i=0;i<size;i++)
		{
			*(arr+i)=*(a+i);
		}
	}
	node* insert(int);
	node *create(char *,int);
	void indisplay(node *);
};
int main()
{
	char a[]={'A','B','C','D','E','F','G','\0','\0','H','\0','\0','\0','\0','\0'};
	int sz=sizeof(a);
	trees t1(a,sz);
	t1.root=t1.insert(0);
	cout<<"Inorder form is : "<<endl;
	t1.indisplay(t1.root);
}

node* trees::insert(int index)
{
	root=create(arr,index);
	return root;
}

node * trees::create(char *a,int index)
{
	node *temp=NULL;
	if(*(a+index)!='\0')
	{
		temp=new node;
		temp->left=create(a,2*index+1);
		temp->data=*(a+index);
		temp->right=create(a,2*index+2);	
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
