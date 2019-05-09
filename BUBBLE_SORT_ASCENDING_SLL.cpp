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
void bsort(node *,node *);
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
				bsort(head,tail);
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

void bsort(node *h,node *t)
{
	node *p=t;
	node *t1=NULL;
	node *pre=NULL;
	node *x=h;
	while(h!=t)
	{
		t1=x;
		while(t1!=p)
		{
			pre=t1;
			if(t1->data>t1->next->data)
			{
				int temp=t1->data;
				t1->data=t1->next->data;
				t1->next->data=temp;
			}
			t1=t1->next;
		}
		p=pre;
		h=h->next;
	}
}
