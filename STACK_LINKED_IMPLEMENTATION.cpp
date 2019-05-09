//This program is to implement various opeartions on stack as in linked list implementation
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
}*top=NULL;
void push();
void pop();
void display();
void search(int);
void sort();
void reverse();
void create(int);
void r_display(node*);
int main()
{
	int ch=1,t;
	cout<<"1.To push "<<endl;
	cout<<"2.To pop "<<endl;
	cout<<"3.To display "<<endl;
	cout<<"4.To search for a particular element "<<endl;
	cout<<"5.To sort in ascending order "<<endl;
	cout<<"6.To reverse the stack "<<endl;
	cout<<"7.To create n nodes at a time "<<endl;
	cout<<"8.To display in reverse order "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"Enter element to be searched "<<endl;
				cin>>t;
				search(t);
				break;
			case 5:
				sort();
				break;
			case 6:
				reverse();
				break;
			case 7:
				cout<<"Enter the number of nodes you want to make "<<endl;
				cin>>t;
				create(t);
				break;
			case 8:
				cout<<"The current stack is : " <<endl;
				r_display(top);
				break;
			default:
				cout<<"Invalid Choice "<<endl;
		}
		cout<<"Enter 1 to continue and 0 to end "<<endl;
		cin>>ch;
	}
}
void push()
{
	node *t=new node;
	cout<<"Enter data "<<endl;
	cin>>t->data;
	t->link=top;
	top=t;
}
void pop()
{
	if(top==NULL)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		node *t=top;
		top=top->link;
		delete t;
	}
}
void display()
{
	if(top==NULL)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		cout<<"The current stack is : "<<endl;
		node *t=top;
		while(t!=NULL)
		{
			cout<<t->data<<endl;
			t=t->link;
		}
	}
}
void search(int key)
{
	if(top==NULL)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		node *t=top;int i=1,flag=0;
		while(t!=NULL)
		{
			if(t->data==key)
			{
				cout<<"Element not found at "<<i<<" position "<<endl;
				flag=1;
				break;
			}
			t=t->link;
		}
		if(flag==0)
		{
			cout<<"Element not found "<<endl;
		}
	}
}
void sort()
{
	if(top==NULL)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		node *t=top,*te,*s;int max;
		while(t!=NULL)
		{
			s=t;
			max=t->data;
			while(te!=NULL)
			{
				if(max<te->data)
				{
					s=te;
					max=te->data;
				}
				te=te->link;
			}
			s->data=t->data;
			t->data=max;	
		}
	}
}
void reverse()
{
	if(top==NULL)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		node*t=top,*c,*p=NULL;int flag=1;
		while(flag)
		{
			c=t;
			t=t->link;
			if(t==NULL)
			{
				top=c;
				c->link=p;
				flag=0;
			}
			c->link=p;
			p=c;
		}
	}
}
void create(int n)
{
	int i=1;
	while(i<=n)
	{
		push();
		i=i+1;
	}
}
void r_display(node *t)
{
	if(top==NULL)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		if(t!=NULL)
		{
			r_display(t->link);
			cout<<t->data<<endl;
		}
	}
}
