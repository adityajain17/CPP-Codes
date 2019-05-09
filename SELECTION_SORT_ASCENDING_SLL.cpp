#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
void insert_end();
void insert_beg();
void display();
void ssort(node *,node *);
int main()
{
	int ch=1;
	cout<<"1.To insert in the beginning : "<<endl;
	cout<<"2.To insert in the end : "<<endl;
	cout<<"3.To display the linked list :  "<<endl;
	cout<<"4.To sort in ascending order : "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				insert_beg();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				display();
				break;
			case 4:
				ssort(head,tail);
				break;
			default:
				cout<<"Invalid Input "<<endl;
		}
		cout<<"Do you want to enter more data (1 for yes / 0 for no ) "<<endl;
		cin>>ch;
	}
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
void insert_beg()
{
	node *t=new node;
	cout<<"Enter the data "<<endl;
	cin>>t->data;
	if(head==NULL)
	{
		head=tail=t;
		t->next=NULL;
	}
	else
	{
		t->next=head;
		head=t;
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

void ssort(node *h,node *t)
{
	node *i=NULL;
	node *j=NULL;
	node *temp=NULL;
	for(i=head;i!=tail;i=i->next)
	{
		temp=i;
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(temp->data>j->data)
			{
				temp=j;
			}
		}
		int s=i->data;
		i->data=temp->data;
		temp->data=s;
	}
}
