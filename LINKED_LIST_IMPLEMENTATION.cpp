#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
void insert_end();
void insert_beg();
void insert_ps(int);
void display();
void del_beg();
void del_end();
void del_pos(int);
void sort();
void count();
void reverse();
void deallocate();
int main()
{
	int pos;
	cout<<"1.To insert data in the end "<<endl;
	cout<<"2.To insert data in the beginning "<<endl;
	cout<<"3.To insert data in the required position "<<endl;
	cout<<"4.To display the linked list "<<endl;
	cout<<"5.To delete from the begining "<<endl;
	cout<<"6.To delete from the end "<<endl;
	cout<<"7.To delete from the given position "<<endl;
	cout<<"8.To sort the linked list in ascending order "<<endl;
	cout<<"9.To count the no. of elements in the list "<<endl;
	cout<<"10.To reverse the linked list "<<endl;
	cout<<"11.To delete the entire list "<<endl;
	int ch=1;
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
				cout<<"Enter the position "<<endl;
				cin>>pos;
				insert_ps(pos);
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
				cout<<"Enter position "<<endl;
				cin>>pos;
				del_pos(pos);
				break;
			case 8:
				sort();
				break;
			case 9:
				count();
				break;
			case 10:
				reverse();
				break;
			case 11:
				deallocate();
				break;
			default:
				cout<<"Invalid Input "<<endl;
		}
		cout<<"Do you want to enter more data (1 for yes / 0 for no ) "<<endl;
		cin>>ch;
	}
	return 0;
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
void insert_ps(int pos)
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
			}
		}
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
void del_beg()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node *t;
		if(head==tail)//Only for one node 
		{
			t=head;
			delete t;
			head=tail=NULL;
		}
		else//more than one node 
		{
			t=head;
			head=head->next;
			delete t;
		}
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
		node*t;
		if(head==tail)
		{
			t=head;
			delete t;
			head=tail=NULL;
		}
		else
		{
			t=head;node *t1=head;
			while(t->next!=NULL)
			{
				t1=t;
				t=t->next;
			}
			t1->next=NULL;
			delete tail;
			tail=t1;
		}
	}	
}
int del_endi()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node*t;int x;
		if(head==tail)
		{
			t=head;
			x=t->data;
			delete t;
			head=tail=NULL;
			return x;
		}
		else
		{
			t=head;node *t1=head;
			while(t->next!=NULL)
			{
				t1=t;
				t=t->next;
			}
			t1->next=NULL;
			x=t->data;
			delete t;
			tail=t1;
			return x;
		}
	}
}
void del_pos(int pos)
{
		if(pos==1)
		{
			del_beg();
		}
		else
		{
			int i=1;
			node*c,*p;
			c=head;
			while(i<pos&&c!=NULL)
			{
				p=c;
				c=c->next;
				i++;
			}
			if(c==NULL)
			{
				cout<<"Invalid Position "<<endl;
			}
			else
			{
				p->next=c->next;
				if(p->next==NULL)
				tail=p;
				delete c;
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
		display();	
	}
}
void count()
{
	int c=0;
	node *t=head;
	while(t!=NULL)
	{
		c=c+1;
		t=t->next;
	}
	cout<<"The number of elemnts are : "<<c<<endl;
}
void reverse()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
	}	
	else
	{
		node *c=head,*p=NULL,*p1=NULL;
		while(c!=NULL)
		{
			p1=p;
			p=c;
			if(c==head)
			{
				tail=p;
			}
			if(c->next==NULL)
			{
				head=p;
			}
			c=c->next;
			p->next=p1;
			
		}
	}
}
void deallocate()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
	}
	else
	{
		while((head!=NULL)&&(tail!=NULL))
		{
			del_end();
		}
	}
}
