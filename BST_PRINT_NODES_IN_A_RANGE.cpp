#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
int c=0;
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
	void count_in_range(node *,int,int);
};

int main()
{
	int x;char ch;
	trees t1;bool res;int key;
	while(1)
	{
		cout<<"Enter data : "<<endl;
		cin>>x;
		t1.root=t1.insert(t1.root,x);
		cout<<"Enter y to continue and n to stop : "<<endl;
		cin>>ch;
		if(ch!='y')
		break;
	}
	cout<<"Tree displayed in inorder form is : "<<endl;
	t1.indisplay(t1.root);
	cout<<endl;
	int ul,ll;
	cout<<"Enter the lower and upper limit respectively : "<<endl;
	cin>>ll>>ul;
	t1.count_in_range(t1.root,ll,ul);
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

void trees::count_in_range(node *r,int ll,int ul)
{
	if(r==NULL)
	{
		return;
	}
	if(r->data>=ll&&r->data<=ul)
	{
		c++;
		cout<<r->data<<" ";
	}
	count_in_range(r->left,ll,ul);
	count_in_range(r->right,ll,ul);
}
