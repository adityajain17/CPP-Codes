//This program is to check if two bst are equal given two arrays with sequence of numbers
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
	bool compare(node *,node *);
};

int main()
{
	trees t1,t2;
	int size1,size2;
	cout<<"Enter size of the first tree "<<endl;
	cin>>size1;
	int ar1[size1];int i=0;
	cout<<"Enter data : "<<endl;
	for(i=0;i<size1;i++)
	{
		cin>>ar1[i];
		t1.root=t1.insert(t1.root,ar1[i]);
	}
	
	cout<<"Enter size of the second tree "<<endl;
	cin>>size2;
	int ar2[size2];i=0;
	cout<<"Enter data : "<<endl;
	for(i=0;i<size2;i++)
	{
		cin>>ar2[i];
		t2.root=t2.insert(t2.root,ar2[i]);
	}
	bool res=t1.compare(t1.root,t2.root);
	if(res)
	{
		cout<<"EQUAL : "<<endl;
	}
	else
	{
		cout<<"NOT EQUAL : "<<endl;
	}
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

bool trees::compare(node *r1,node *r2)
{
	if(r1!=NULL&&r2==NULL)
	{
		return false;
	}
	else if(r2!=NULL&&r1==NULL)
	{
		return false;
	}
	else if(r1!=NULL&&r2!=NULL)
	{
		if(r1->data!=r2->data)
		{
			return(false);
		}
	}
	else
	{
		return true;
	}
	return(compare(r1->left,r2->left));
	return(compare(r1->right,r2->right));
}

