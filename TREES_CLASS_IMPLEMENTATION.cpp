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
	void predisplay(node *);
	void postdisplay(node *);
	int height(node *);
	void tblr(node*,int);
	void print_nodes_in_a_level(node *,int);
	void leaf_count(node *);
	void inte_count(node *);
	void en(node *);
	int de();
	void tblr_queue(node *);
	int count(node *);
	node * mirror_image(node *,node *);
	void max_path(node *);
	node * copy(node  *,node *);
	void outline(node *);
	void outlinel(node *);
	void outliner(node *);
	void inorder(node *);
	void search(node *,int);
};
int main()
{
	trees t1;
	int level=0;
	t1.root=t1.create(t1.root);
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
	t1.leaf_count(t1.root);
	cout<<"The number of leaves are : "<<c<<endl;
	c=0;
	t1.inte_count(t1.root);
	cout<<"The number of internal nodes are : "<<c<<endl;
	cout<<"LEVEL ORDER IS : "<<endl;
	if(t1.root!=NULL)
	{
		t1.en(t1.root);
		t1.tblr_queue(q[front]);
	}
	cout<<"TOATAL NUMBER OF NODES ARE : "<<t1.count(t1.root)<<endl;
	trees t2;
	t2.root=t2.mirror_image(t1.root,t2.root);
	t2.tblr(t2.root,t2.height(t2.root));/*
	cout<<"MAXIMUM PATH : "<<endl;
	cout<<endl;
	t1.max_path(t1.root);
	trees t3;
	t3.root=t3.copy(t1.root,t3.root);
	t3.tblr(t3.root,t3.height(t3.root));
	t1.outline(t1.root);
	t1.inorder(t1.root);
	int key;
	cout<<"Enter the element to be searched "<<endl;
	cin>>key;
	t1.search(t1.root,key);
	if(flag==0)
	{
		cout<<"ELEMENT NOT FOUND : "<<endl;
	}*/
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


void trees::en(node *r)
{
	if((front==0&&rear==19)||(rear==front-1))
	{
		cout<<"QUEUE IS FULL : "<<endl;
	}
	rear=(rear+1)%20;
	q[rear]=r;
	if(front==-1)
	{
		front=0;
	}
}


int trees::de()
{
	int t=q[front]->data;
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
	front=(front+1)%20;	
	}
	return t;
}


void trees::tblr_queue(node *r)
{
	cout<<de()<<" ";
	if(r->left!=NULL)
	{
		en(r->left);
	}
	if(r->right!=NULL)
	{
		en(r->right);
	}
	if(front>=0)
	{
		tblr_queue(q[front]);
	}
}


int trees::count(node  *root)
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


node * trees::mirror_image(node *r1,node *r2)
{
	r2=new node;
	r2->data=r1->data;
	if(r1->left!=NULL)
	{
		r2->right=mirror_image(r1->left,r2->right);
	}
	else
	{
		r2->right=NULL;
	}
	if(r1->right!=NULL)
	{
		r2->left=mirror_image(r1->right,r2->left);
	}
	else
	{
		r2->left=NULL;
	}
	return r2;
}


node *trees::copy(node *r1,node *r2)
{
	r2=new node;
	r2->data=r1->data;
	if(r1->left!=NULL)
	{
		r2->left=copy(r1->left,r2->left);
	}
	else
	{
		r2->left=NULL;
	}
	if(r1->right!=NULL)
	{
		r1->right=copy(r1->right,r2->right);
	}
	else
	{
		r1->right=NULL;
	}
}


void trees::max_path(node *root)
{
	if(root==NULL)
	{
		return;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	if(h1>h2)
	{
		cout<<root->data<<" ";
		max_path(root->left);
	}
	if(h2>h1)
	{
		cout<<root->data<<" ";
		max_path(root->right);
	}
}


void trees::outline(node *r)
{
		outlinel(r);
		outliner(r->right);
}


void trees::outlinel(node *r)
{
	if(r!=NULL)
	{
		outlinel(r->left);
		cout<<r->data<<" ";
	}
}


void trees::outliner(node *r)
{
	if(r==NULL)
	{
		return ;
	}
		cout<<r->data<<" ";
		outliner(r->right);
}


void trees::inorder(node *r)
{
	node *current=r;
	while(true)
	{
		while(current!=NULL)
		{
			top++;
			stack[top]=current;
			current=current->left;
		}
		if(stack[top]->right==NULL)
		{
			cout<<stack[top]->data<<" ";
			top--;
		}
		if(top==-1)
		{
			break;
		}
		if(stack[top]->right!=NULL)
		{
			cout<<stack[top]->data<<" ";
			current=stack[top]->right;
			top--;
		}
	}
}


void trees::search(node *root,int key)
{
	if(root==NULL)
	{
		return;
	}
	if(root->data==key)
	{
		cout<<"ELEMENT FOUND : "<<endl;
		flag=1;
		return;
	}
	search(root->left,key);
	search(root->right,key);
}
