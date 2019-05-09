#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
void insert_end();
void insert_ps(int);
void sort();
void display();
void ins();
int main()
{
	int ch=1;
	while(ch)
	{
		insert_end();
		cout<<"Do you want to enter more (1 for yes / 0 for no ) "<<endl;
		cin>>ch;
	}
	sort();
}
void insert_end()
{
	node *t=new node;
	cout<<"Enter data "<<endl;
	cin>>t->data;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
	}
	else
	{
		tail->next=t;
		tail=t;
	}
}
void insert_ps(int pos)
{
	if(pos==1)
	{
		insert_end();	
	}
	else
	{
		int i=1;
		node *t1=new node;
		cout<<"Enter data "<<endl;
		cin>>t1->data;
		node *t=head;
		while(i<pos-1&&t!=NULL)
		{
			t=t->next;
			i=i+1;
		}
		if(t==NULL)
		{
			cout<<"Invalid Position "<<endl;
		}
		else
		{
			t1->next=t->next;
			t->next=t1;
			}
		}
}
void sort()
{
	if(head==NULL)
	{
		cout<<"The list is empty "<<endl;
	}
	else
	{
		node *t=head,*t1=head;int x,y;node *s;
		while(t!=NULL)
		{
			x=t->data;
			s=t;
			while(t1!=NULL)
			{
				y=t1->data;
				if(x>y)
				{
					x=y;
					s=t1;
				}
				t1=t1->next;
			}
			s->data=t->data;
			t->data=x;
			t=t->next;
			t1=t;
		}
		cout<<"The current list : "<<endl;
		display();	
	}
}
void display()
{
	if(head==NULL)
	{
		cout<<"The list is empty "<<endl;
	}
	else
	{
		cout<<"The current list is : "<<endl;
		node *t=head;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->next;
		}
		cout<<endl;
	}
}
