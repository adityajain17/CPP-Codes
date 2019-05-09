//This program is to implement double ended queues (linked list implementation)
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
}*head=NULL,*tail=NULL;
void intf();
void intr();
void delf();
void delr();
void display();
int main()
{
	int ch=1,t;
	cout<<"1.Enqueue in front "<<endl;
	cout<<"2.Enqueue in rear "<<endl;
	cout<<"3.Dequeue in front "<<endl;
	cout<<"4.Dequeue in rear "<<endl;
	cout<<"5.To display "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				intf();
				break;
			case 2:
				intr();
				break;
			case 3:
				delf();
				break;
			case 4:
				delr();
				break;
			case 5:
				display();
				break;
			default:
				cout<<"Invalid Choice "<<endl;
		}
		cout<<"Enter 1 to continue and 0 to end "<<endl;
		cin>>ch;
	}
}
void intf()
{
	node *t=new node;
	cout<<"Enter data "<<endl;
	cin>>t->data;
	t->prev=NULL;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
	}
	else
	{
		t->next=head;
		head->prev=t;
		head=t;
	}
}
void intr()
{
	node *t=new node;
	cout<<"Enter data "<<endl;
	cin>>t->data;
	t->prev=NULL;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
	}
	else
	{
		tail->next=t;
		t->prev=tail;
		tail=t;
	}
}
void delf()
{
	if(head==NULL)
	{
		cout<<"The queue is empty : "<<endl;
	}
	else
	{
		node *t=head;
		head=head->next;
		if(head==NULL)
		{
			head=tail=NULL;
		}
		else
		{
			head->prev=NULL;
		}
		delete t;
	}
}
void delr()
{
	if(head==NULL)
	{
		cout<<"The queue is empty : "<<endl;
	}
	else
	{
		node *t=tail;
		tail=tail->prev;
		if(tail==NULL)
		{
			head=tail=NULL;
		}
		else
		{
			tail->next=NULL;
		}
		delete t;
	}
}
void display()
{
	if(head==NULL)
	{
		cout<<"The queue is empty : "<<endl;
	}
	else
	{
		cout<<"The queue is : "<<endl;
		node *t=head;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->next;
		}
		cout<<endl;
	}
}
