#include<iostream>
using namespace std;
class linked
{
	private:
		struct node
		{
			int data;
			node *next;
		}*head=NULL,*tail=NULL;
	public:
		void insert_end();
		void insert_beg();
		void insert_ps(int);
		void display();
		void del_beg();
		void del_end();
		void del_pos(int);
		void sort();
		void count();
		int counti();
		void reverse();
		void deallocate();
		int del_endi();
		void unite(linked,linked);
};
int main()
{
	linked l1,l2;
	int pos;
	cout<<"Enter details of first linked list "<<endl;
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
				l1.insert_end();
				break;
			case 2:
				l1.insert_beg();
				break;
			case 3:
				cout<<"Enter the position "<<endl;
				cin>>pos;
				l1.insert_ps(pos);
				break;
			case 4:
				l1.display();
				break;
			case 5:
				l1.del_beg();
				break;
			case 6:
				l1.del_end();
				break;
			case 7:
				cout<<"Enter position "<<endl;
				cin>>pos;
				l1.del_pos(pos);
				break;
			case 8:
				l1.sort();
				break;
			case 9:
				l1.count();
				break;
			case 10:
				l1.reverse();
				break;
			case 11:
				l1.deallocate();
				break;
			default:
				cout<<"Invalid Input "<<endl;
		}
		cout<<"Do you want to enter more data (1 for yes / 0 for no ) "<<endl;
		cin>>ch;
	}
	ch=1;
	cout<<"Enter the details of linked list 2 "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				l2.insert_end();
				break;
			case 2:
				l2.insert_beg();
				break;
			case 3:
				cout<<"Enter the position "<<endl;
				cin>>pos;
				l2.insert_ps(pos);
				break;
			case 4:
				l2.display();
				break;
			case 5:
				l2.del_beg();
				break;
			case 6:
				l2.del_end();
				break;
			case 7:
				cout<<"Enter position "<<endl;
				cin>>pos;
				l2.del_pos(pos);
				break;
			case 8:
				l2.sort();
				break;
			case 9:
				l2.count();
				break;
			case 10:
				l2.reverse();
				break;
			case 11:
				l2.deallocate();
				break;
			default:
				cout<<"Invalid Input "<<endl;
		}
		cout<<"Do you want to enter more data (1 for yes / 0 for no ) "<<endl;
		cin>>ch;
	}
	linked l3;
	l3.unite(l1,l2);
	cout<<"Do you want to do any opeartions on this list (1 for yes /0 for no ) "<<endl;
	cin>>ch;
	if(ch==1)
	{
		while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				l3.insert_end();
				break;
			case 2:
				l3.insert_beg();
				break;
			case 3:
				cout<<"Enter the position "<<endl;
				cin>>pos;
				l3.insert_ps(pos);
				break;
			case 4:
				l3.display();
				break;
			case 5:
				l3.del_beg();
				break;
			case 6:
				l3.del_end();
				break;
			case 7:
				cout<<"Enter position "<<endl;
				cin>>pos;
				l3.del_pos(pos);
				break;
			case 8:
				l3.sort();
				break;
			case 9:
				l3.count();
				break;
			case 10:
				l3.reverse();
				break;
			case 11:
				l3.deallocate();
				break;
			default:
				cout<<"Invalid Input "<<endl;
		}
		cout<<"Do you want to enter more data (1 for yes / 0 for no ) "<<endl;
		cin>>ch;
	}
	}
}
void linked::insert_end()
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
void linked::insert_beg()
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
void linked::insert_ps(int pos)
{
	if(pos==1)
	{
		insert_beg();	
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
void linked::display()
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
void linked::del_beg()
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
void linked::del_end()
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
int linked::del_endi()
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
void linked::del_pos(int pos)
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
				delete p;
			}
		}
	}
void linked::sort()
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
void linked::count()
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
int linked::counti()
{
	int c=0;
	node *t=head;
	while(t!=NULL)
	{
		c=c+1;
		t=t->next;
	}
	return c;
}
void linked::reverse()
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
void linked::deallocate()
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
void linked::unite(linked l1,linked l2)
{
	node *t=l1.head;
	node *t1=l2.head;
	while(t!=NULL)
	{
		if(head==NULL)
		{
			node *k=new node;
			k->data=t->data;
			k->next=NULL;
			head=tail=k;
		}
		else
		{
			node *tr=head;
			int flag=0;
			while(tr!=NULL)
			{
				if(tr->data==t->data)
				{
					flag=1;
					break;
				}
				tr=tr->next;
			}
			if(flag==0)
			{
				node *k=new node;
				k->data=t->data;
				k->next=NULL;
				tail->next=k;
				tail=k;
			}
		}
		t=t->next;
	}
	while(t1!=NULL)
	{
		if(head==NULL)
		{
			node *k=new node;
			k->data=t1->data;
			k->next=NULL;
			head=tail=k;
		}
		else
		{
			node *tr=head;
			int flag=0;
			while(tr!=NULL)
			{
				if(tr->data==t1->data)
				{
					flag=1;
					break;
				}
				tr=tr->next;
			}
			if(flag==0)
			{
				node *k=new node;
				k->data=t1->data;
				k->next=NULL;
				tail->next=k;
				tail=k;
			}
		}
		t1=t1->next;
	}
	display();
}
