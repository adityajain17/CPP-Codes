//This program is to implement single linked list and various operations on it 
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
		void search(int);
		void reverse();
		void deallocate();
		int del_endi();
		void create(int);
		void insta_sort(int);
		//node *value();
		void rev_display(node*);
		void del_mul();
};
int main()
{
	linked l1;
	int pos;
	cout<<"1.To insert data in the end "<<endl;
	cout<<"2.To insert data in the beginning "<<endl;
	cout<<"3.To insert data in the required position "<<endl;
	cout<<"4.To display the linked list "<<endl;
	cout<<"5.To delete from the begining "<<endl;
	cout<<"6.To delete from the end "<<endl;
	cout<<"7.To delete from the given position "<<endl;
	cout<<"8.To sort the linked list in ascending order "<<endl;
	cout<<"9.To search for a particular element in a linked list "<<endl;
	cout<<"10.To count the no. of elements in the list "<<endl;
	cout<<"11.To reverse the linked list "<<endl;
	cout<<"12.To delete the entire list "<<endl;
	cout<<"13.To create n nodes at a time "<<endl;
	cout<<"14.To append a new element and sort it instantly "<<endl;
	cout<<"15.To display in reverse order without changing the linked list "<<endl;
	cout<<"16.To delete multiple nodes "<<endl;
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
				cout<<"Enter the element you want to search "<<endl;
				cin>>pos;
				l1.search(pos);//just the variable name is pos but it is passing the key value to be searched .
				break;
			case 10:
				l1.count();
				break;
			case 11:
				l1.reverse();
				break;
			case 12:
				l1.deallocate();
				break;
			case 13:
				cout<<"Enter the number of nodes you want to add "<<endl;
				cin>>pos;//It represent number of elements in this case 
				l1.create(pos);
				break;
			case 14:
				cout<<"Enter the number of nodes you want to add "<<endl;
				cin>>pos;//It represent number of elements in this case //Two approaches are possible either to call sort function 
				//repeatedly or do it the original way 
				l1.insta_sort(pos);
				break;
			//case 15:
			//	l1.rev_display(l1.value());
			//	break;
			case 16:
				l1.del_mul();
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
				delete c;
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
void linked::search(int key)
{
	node *t=head;int i=1,flag=0;
	while(t!=NULL)
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
	if(flag==0)
	cout<<"Element not found "<<endl;
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
void linked::create(int n)
{
	int i=1,ch=1,pos;
	for(i=1;i<=n;i++)
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
			default:
				cout<<"Invalid Input "<<endl;
		}
	}
	display();
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
void linked::rev_display(node *c)
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		if(c!=NULL)
		{
			rev_display(c->next);
			cout<<c->data<<" ";
		}
	}
}
void linked::del_mul()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node *t=head;int i,j=2;
		while(t!=NULL)
		{
			node *t1=t->next;
			j=i;
			while(t1!=NULL)
			{
				if(t1->data==t->data)
				{
					t1=t1->next;
					del_pos(i);
				}
				else
				{
					i=i+1;
					t1=t1->next;
				}
			}
			t=t->next;
			j=j+1;
		}
	}
}
