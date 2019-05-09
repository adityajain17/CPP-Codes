//This program is to implement circular double linked list
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
}*head=NULL,*tail=NULL;
void insert_beg();
void insert_end();
void insert_pos(int);
void display();
void r_display();
void del_beg();
void del_end();
void del_pos(int);
void reverse();
void count();
void search(int);
void create(int);
void sort();
int main()
{
	int ch=1,pos;
	cout<<"1.To insert data in the end "<<endl;
	cout<<"2.To insert data in the beginning "<<endl;
	cout<<"3.To insert in the position "<<endl;
	cout<<"4.To display the data "<<endl;
	cout<<"5.To display the data in reverse order  "<<endl;
	cout<<"6.To delete from the beginning "<<endl;
	cout<<"7.To delete from the end "<<endl;
	cout<<"8.To delete from the given position "<<endl;
	cout<<"9.To reverse the linked list "<<endl;
	cout<<"10.To count the number of elements in the linked list "<<endl;
	cout<<"11.To search the element the linked list "<<endl;
	cout<<"12.To create n nodes at a time "<<endl;
	cout<<"13.To sort in ascending order "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				insert_end();
				break;
			case 2:
				insert_beg();
				break;
			case 3:
				cout<<"Enter position "<<endl;
				cin>>pos;
				insert_pos(pos);
				break;
			case 4:
				display();
				break;
			case 5:
				r_display();
				break;
			case 6:
				del_beg();
				break;
			case 7:
				del_end();
				break;
			case 8:
				cout<<"Enter the position "<<endl;
				cin>>pos;
				del_pos(pos);
				break;
			case 9:
				reverse();
				break;
			case 10:
				count();
				break;
			case 11:
				cout<<"Enter the element to search "<<endl;
				cin>>pos;
				search(pos);
				break;
			case 12:
				cout<<"Enter the nodes you want to make "<<endl;
				cin>>pos;
				create(pos);
				break;
			case 13:
				sort();
				break;
			default:
				cout<<"Invalid choice "<<endl;
		}
		cout<<"Enter 1 to continue and 0 to exit "<<endl;
		cin>>ch;
	}
}
void insert_beg()
{
	node *t=new node;
	cout<<"Enter data : "<<endl;
	cin>>t->data;
	t->next=NULL;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
		head->prev=t;
		head->next=t;
	}
	else
	{
		t->next=head;
		head->prev=t;
		tail->next=t;
		t->prev=tail;
		head=t;
	}
}
void insert_end()
{
	node *t=new node;
	cout<<"Enter data : "<<endl;
	cin>>t->data;
	t->next=NULL;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
		head->prev=t;
		head->next=t;
	}
	else
	{
		tail->next=t;
		t->prev=tail;
		t->next=head;
		head->prev=t;
		tail=t;
	}
}
void insert_pos(int pos)
{
	if(pos==1)
	{
		insert_beg();
	}
	else
	{
		int i=1;
		node*c=head;
		while((i<pos-1)&&(c!=head||i==1))
		{
			i=i+1;
			c=c->next;
		}
		if(c==head&&i!=1)
		{
			cout<<"Invalid Position "<<endl;
		}
		else
		{
			node*t=new node;
			cout<<"Enter data "<<endl;
			cin>>t->data;
			t->next=NULL;
			t->prev=NULL;
			if(c->next==head)
			{
				tail->next=t;
				t->prev=tail;
				tail=t;
				tail->next=head;
				head->prev=tail;
			}
			else
			{
				node *temp;
				t->next=c->next;
				t->prev=c;
				temp=t->next;
				temp->prev=t;
				c->next=t;
			}
		}
	}
}
void display()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		cout<<"The linked list is : "<<endl;
		node *t=head;
		do
		{
			cout<<t->data<<" ";
			t=t->next;
		}
		while(t!=head);
		cout<<endl;
	}
}
void r_display()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		cout<<"The linked list is : "<<endl;
		node *t=tail;
		do
		{
			cout<<t->data<<" ";
			t=t->prev;
		}
		while(t!=tail);
		cout<<endl;
	}
}
void del_beg()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node *t=head;
		if(head==tail)
		{
			head=tail=NULL;
		}
		else
		{
			if(t->next==tail)
			{
				node *temp=t->next;
				temp->prev=temp;
				temp->next=temp;
				head=temp;
			}
			else
			{
				head=head->next;
				head->prev=tail;
				tail->next=head;
			}
		}
		delete t;
	}
}
void del_end()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node *t=head;
		if(head==tail)
		{
			head=tail=NULL;
		}
		else
		{
			if(t->prev==head)
			{
				node *temp=t->prev;
				temp->prev=temp;
				temp->next=temp;
				tail=temp;
			}
			else
			{
				tail=tail->prev;
				tail->next=head;
				head->prev=tail;
			}
		}
	}
}
void del_pos(int pos)
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		if(pos==1)
		{
			del_beg();
		}
		else
		{
			int i=1;
			node *c=head,*p;
			do
			{
				p=c;
				i=i+1;
				c=c->next;
			}
			while(i<pos&&c!=head);
			if(c==head)
			{
				cout<<"Invalid position "<<endl;
			}
			else
			{
				p->next=c->next;
				if(c==tail)
				{
					tail=p;
					head->prev=tail;
					tail->next=head;
				}
				delete c;
			}
		}
	}
}
void reverse()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		node *t=head,*temp;
		do
		{
			temp=t->next;
			t->next=t->prev;
			t->prev=temp;
			t=t->next;
		}
		while(t!=head);
		temp=head;
		head=tail;
		tail=temp;
	}
}
void count()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		int c=0;node *t=head;
		do
		{
			t=t->next;
			c=c+1;
		}
		while(t!=head);
		cout<<"The elements are : "<<c<<endl;
	}
}
void search(int key)
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		node *t=head;int i=1,flag=0;
		do
		{
			if(key==t->data)
			{
				cout<<"Element found at "<<i<<endl;
				flag=1;
				break;
			}
			t=t->next;
			i=i+1;
		}
		while(t!=head);
		if(flag==0)
		cout<<"Element not found "<<endl;
	}
}
void create(int n)
{
	int i=1;
	while(i<=n)
	{
		insert_end();
		i=i+1;
	}
}
void sort()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		node *t=head,*t1=head;int x,y;node *s;
		do
		{
			x=t->data;
			s=t;
			do
			{
				y=t1->data;
				if(x>y)
				{
					x=y;
					s=t1;
				}
				t1=t1->next;
			}
			while(t1!=head);
			s->data=t->data;
			t->data=x;
			t=t->next;
			t1=t;
		}
		while(t!=head);
		display();	
	}
}
