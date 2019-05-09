//This program is to implement insertion sort in DLL
#include<iostream>
using namespace std;
class linked
{
	private:
		struct node
		{
			int data;
			node *next;
			node *prev;
		}*head=NULL,*tail=NULL;
	public:
		void insert_end();
		void insert_beg();
		void display();
		void create(int);
		void insort();
};

int main()
{
	linked l1;
	cout<<"1.To insert data in the end "<<endl;
	cout<<"2.To insert data in the beginning "<<endl;
	cout<<"3.To display the linked list "<<endl;
	cout<<"4.To create n nodes at a time "<<endl;
	cout<<"5.To sort the elements in ascending order "<<endl;
	int ch=1;
	int pos;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				l1.insert_end();
				break;
			case 2:
				l1.insert_beg();
				break;
			case 3:
				l1.display();
				break;
			case 4:
				cout<<"Enter the number of elements you want to add "<<endl;
				cin>>pos;
				l1.create(pos);
				break;
			case 5:
				l1.insort();
				break;
			default:
				cout<<"Invalid Input "<<endl;
		}
		cout<<"Do you want to enter more data (1 for yes / 0 for no ) "<<endl;
		cin>>ch;
	}
	return 0;
}

void linked::insert_end()
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

void linked::insert_beg()
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

void linked::display()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		cout<<"The linked list is : "<<endl;
		node *t=head;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->next;
		}
		cout<<endl;	
	}
}

void linked::create(int n)
{
	int i=1;
	while(i<=n)
	{
		insert_end();
		i=i+1;
	}
}

void linked::insort()
{
	node *t=head->next,*p=head;
	while(t!=NULL)
	{
		int key=t->data;
		if(key>p->data)
		{
			p=t;
			t=t->next;
			continue;
		}
		else
		{
			node *pre=NULL;
			while(p!=NULL&&key<p->data)
			{
				p->next->data=p->data;
				pre=p;
				p=p->prev;
			}
			pre->data=key;
		}
		p=t;
		t=t->next;
	}
}
