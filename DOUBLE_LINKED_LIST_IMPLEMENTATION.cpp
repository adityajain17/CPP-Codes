//This program is to implement double linked list and various opeartions on it
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
		void insert_pos(int);
		void del_end();
		void del_beg();
		void del_pos(int);
		void display();
		void rev_display();
		void search(int);
		void count();
		void sort();
		void create(int);
		void insta_sort(int);
		void reverse();
};
int main()
{
	linked l1;
	int pos;
	cout<<"1.To insert data in the end "<<endl;
	cout<<"2.To insert data in the beginning "<<endl;
	cout<<"3.To insert data in the required position "<<endl;
	cout<<"4.To display the linked list "<<endl;
	cout<<"5.To display in the reverse order "<<endl;
	cout<<"6.To delete from the begining "<<endl;
	cout<<"7.To delete from the end "<<endl;
	cout<<"8.To delete from the given position "<<endl;
	cout<<"9.To search for a particular element "<<endl;
	cout<<"10.To count the number of elements "<<endl;
	cout<<"11.To sort the elements in ascending order "<<endl;
	cout<<"12.To create n nodes at a time "<<endl;
	cout<<"13.To append a new node and sort it instantly "<<endl;
	cout<<"14.To reverse the linked list "<<endl;
	int ch=1;
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
				cout<<"Enter the position "<<endl;
				cin>>pos;
				l1.insert_pos(pos);
				break;
			case 4:
				l1.display();
				break;
			case 5:
				l1.rev_display();
				break;
			case 6:
				l1.del_beg();
				break;
			case 7:
				l1.del_end();
				break;
			case 8:
				cout<<"Enter position "<<endl;
				cin>>pos;
				l1.del_pos(pos);
				break;
			case 9:
				cout<<"Enter the element you want to search "<<endl;
				cin>>pos;
				l1.search(pos);
				break;
			case 10:
				l1.count();
				break;
			case 11:
				l1.sort();
				break;
			case 12:
				cout<<"Enter the number of elements you want to add "<<endl;
				cin>>pos;
				l1.create(pos);
				break;
			case 13:
				cout<<"Enter the number of elements "<<endl;
				cin>>pos;
				l1.insta_sort(pos);
				break;
			case 14:
				l1.reverse();
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
void linked::insert_pos(int pos)
{
	if(pos==1)
	{
		insert_beg();
	}
	else
	{
		int i=0;
		node *t1=new node;
		cout<<"Enter data "<<endl;
		cin>>t1->data;
		t1->next=NULL;
		t1->prev=NULL;
		node *t=head;
		while(i<pos-2&&t!=NULL)
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
			if(t->next==NULL)
			{
				t->next=t1;
				tail=t1;
			}
			else
			{
				t1->next=t->next;
				t->next=t1;
				node *temp;
				temp=t1->next;
				temp->prev=t1;
			}
		}
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

void linked::rev_display()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		cout<<"The linked list is : "<<endl;
		node *t=tail;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->prev;
		}
		cout<<endl;
	}
}
void linked::del_beg()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
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
void linked::del_end()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
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
void linked::del_pos(int pos)
{
	if(pos==1)
	{
		del_beg();
	}
	else
	{
		int i=1;
		node *c=head;
		while(i<pos&&c!=NULL)
		{
			i=i+1;
			c=c->next;
		}
		if(c==NULL)
		{
			cout<<"Invalid choice "<<endl;		
		}
		else
		{
			if(c->next==NULL)
			{
				tail=tail->prev;
				tail->next=NULL;
			}
			else
			{
				c->prev->next=c->next;
				c->next->prev=c->prev;
			}
			delete c;
		}
	}
}
void linked::search(int pos)
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		node *t=head;int i=1,flag=0;
		while(t!=NULL)
		{
			if(t->data==pos)
			{
				cout<<"Element found at position "<<i<<endl;
				flag=1;
			}
			t=t->next;
			i=i+1;
		}
		if(flag==0)
		cout<<"Element not found "<<endl;
	}
}
void linked::count()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
	}
	else
	{
		int c=0;
		node *t=head;
		while(t!=NULL)
		{
			c=c+1;
			t=t->next;
		}
		cout<<"The number of elements are :  "<<c<<endl;
	}
}
void linked::sort()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty "<<endl;
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
		display();
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
void linked::insta_sort(int n)
{
	int i=1;
	for(i=1;i<=n;i++)
	{
		insert_end();
		sort();
	}
}
void linked::reverse()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node*t=head;
		node *t1,*t2;
		while(t!=NULL)
		{
			t2=t->next;
			if(t->prev==NULL)
			{
				tail=t;
			}
			if(t->next==NULL)
			{
				head=t;
			}
			t1=t->prev;
			t->prev=t->next;
			t->next=t1;
			t=t2;
		}
	}
}
