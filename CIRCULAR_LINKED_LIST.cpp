//This program is to implement circular single linked list
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
int c=1;
void insert_end();
void insert_beg();
void insert_pos(int);
void display();
void del_beg();
void del_end();
void del_pos(int);
void rev_display(node *);
void sort();
void search(int);
void count();
void create(int);
void reverse();
int main()
{
	int ch=1,pos;
	cout<<"1.To insert in the beginning "<<endl;
	cout<<"2.To insert in the end "<<endl;
	cout<<"3.To insert in the required position "<<endl;
	cout<<"4.To display "<<endl;
	cout<<"5.To delete from the beginning "<<endl;
	cout<<"6.To delete from the end "<<endl;
	cout<<"7.To delete from position "<<endl;
	cout<<"8.To display in reverse order "<<endl;
	cout<<"9.To search for a particular element : "<<endl;
	cout<<"10.To count the number of elemnts in the list "<<endl;
	cout<<"11.To sort in ascending order "<<endl;
	cout<<"12.To create n nodes at a time "<<endl;
	cout<<"13.To reverse the linked lsit "<<endl;
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
				cout<<"Enter the postition "<<endl;
				cin>>pos;
				insert_pos(pos);
				break;
			case 4:
				display();
				break;
			case 5:
				del_beg();
				break;
			case 6:
				del_end();
				break;
			case 7:
				cout<<"Enter postion "<<endl;
				cin>>pos;
				del_pos(pos);
				break;
			case 8:
				cout<<"The list is in reverse order : "<<endl;
				c=1;
				rev_display(head);
				cout<<endl;
				break;
			case 9:
				cout<<"Enter the element to be searched  "<<endl;
				cin>>pos;
				search(pos);
				break;
			case 10:
				count();
				break;
			case 11:
				sort();
				break;
			case 12:
				cout<<"Enter the number of nodes you want to add "<<endl;
				cin>>pos;
				create(pos);
				break;
			case 13:
				reverse();
				break;
			default:
				cout<<"invalid Input "<<endl;
		}
		cout<<"To continue press 1 to stop press 0 "<<endl;
		cin>>ch;
	}
}
void insert_beg()
{
	node*t=new node;
	cout<<"Enter data : "<<endl;
	cin>>t->data;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
		head->next=head;
	}
	else
	{
		t->next=head;
		head=t;
		tail->next=head;
	}
}
void insert_end()
{
	node *t=new node;
	cout<<"Enter data : "<<endl;
	cin>>t->data;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
		head->next=head;
	}
	else
	{
		tail->next=t;
		tail=t;
		tail->next=head;
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
			if(c->next==head)
			{
				tail->next=t;
				tail=t;
				tail->next=head;
			}
			else
			{
				t->next=c->next;
				c->next=t;
			}
		}
	}
}
void display()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
	}
	else
	{
		node*t=head;
		cout<<"The list is : "<<endl;
		do
		{
			cout<<t->data<<" ";
			t=t->next;
		}
		while(t!=head);
		cout<<endl;
	}
}
void del_beg()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
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
			head=head->next;
			tail->next=head;
		}
		delete t;
	}
}
void del_end()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
	}
	else
	{
		node *t=head,*c;
		if(head==tail)
		{
			head=tail=NULL;
		}
		else
		{
			c=head;
			while(c->next!=tail)
			{
				c=c->next;
			}
			c->next=head;
			delete tail;
			tail=c;
		}
	}
}
void del_pos(int pos)
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
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
				tail=p;
				delete c;
			}
		}
	}
}
void rev_display(node *t)
{
	if(t!=head||c==1)
	{
		c=c+1;
		rev_display(t->next);
		cout<<t->data<<" ";
	}
}
void search(int key)
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node *t=head;int i=1,flag=0;
		do
		{
			if(t->data==key)
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
		{
			cout<<"Element not found  "<<endl;
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
void count()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
	}
	else
	{
		int c=0;
		node *t=head;
		do
		{
			t=t->next;
			c=c+1;
		}
		while(t!=head);
		cout<<"The number of elements are : "<<c<<endl;
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
void reverse()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		node *t=head,*c=tail,*p=NULL;int flag=1;
			while(flag)
			{
			p=t;
			if(t==head)
			{
				tail=t;
				t=t->next;
				tail->next=c;
			}
			else if(t->next==head)
			{
				head=t;
				p->next=c;
				flag=0;
			}
			else
			{
				t=t->next;
				p->next=c;
			}
			c=p;
		}
	}
}
