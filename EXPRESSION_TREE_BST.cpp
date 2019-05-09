#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
struct node
{
	char data;
	node *left;
	node *right;
};
node *ad[50];int top=-1;
class trees
{
	public:
	node *root;
	trees()
	{
		root=NULL;
	}
	node *create(char []);
	void push(node *);
	node *pop();
	void indisplay(node *);
	int isoperator(char);
};
int main()
{
	trees t1;
	char s1[50];
	cout<<"Enter the postfix expression : "<<endl;
	gets(s1);
	t1.root=t1.create(s1);
	cout<<"Indisplay order : which means the infix expression : "<<endl;
	t1.indisplay(t1.root);
}

void trees::push(node *t)
{
	if(top==50)
	{
		cout<<"Overflow : "<<endl;
	}
	else
	{
		top++;
		ad[top]=t;
	}
}

node* trees::pop()
{
	if(top==-1)
	{
		cout<<"Underflow : "<<endl;
	}
	else
	{
		top--;
		return(ad[top+1]);
	}
}
int trees::isoperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


node *trees::create(char post[])
{
	for(int i=0;i<strlen(post);i++)
	{
		if(isoperator(post[i]))
		{
			node *f=pop();
			node *s=pop();
			node *t=new node;
			t->data=post[i];
			t->right=f;
			t->left=s;
			push(t);
		}
		else
		{
			node *t=new node;
			t->data=post[i];
			t->left=NULL;
			t->right=NULL;
			push(t);
		}
	}
	return (pop());
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
		cout<<r->data;
		indisplay(r->right);
	}
}
