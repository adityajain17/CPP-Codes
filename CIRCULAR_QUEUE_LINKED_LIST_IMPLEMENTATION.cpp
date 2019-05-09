//This program is to implement circular queue using linked list
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
}*front=NULL,*rear=NULL;
int c=1;
void enqueue(int);
void dequeue();
void display();
void search(int);
void sort();
void create(int);
void reverse();
void r_display(node *);
int main()
{
	int ch=1,t;
	cout<<"1.Enqueue "<<endl;
	cout<<"2.Dequeue "<<endl;
	cout<<"3.To display "<<endl;
	cout<<"4.To search for a particular element "<<endl;
	cout<<"5.To sort in ascending order "<<endl;
	cout<<"6.To reverse the queue "<<endl;
	cout<<"7.To create n nodes at a time "<<endl;
	cout<<"8.To display in reverse order "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter data : "<<endl;
				cin>>t;
				enqueue(t);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"Enter element to be searched "<<endl;
				cin>>t;
				search(t);
				break;
			case 5:
				sort();
				break;
			case 6:
				reverse();
				break;
			case 7:
				cout<<"Enter the number of nodes you want to make "<<endl;
				cin>>t;
				create(t);
				break;
			case 8:
				cout<<"The queue is : "<<endl;
				c=1;
				r_display(front);
				cout<<endl;
				break;
			default:
				cout<<"Invalid Choice "<<endl;
		}
		cout<<"Enter 1 to continue and 0 to end "<<endl;
		cin>>ch;
	}
}
void enqueue(int item)
{
	node *t=new node;
	t->data=item;
	t->link=NULL;
	if(front==NULL)
	{
		front=rear=t;
		t->link=front;
	}
	else
	{
		rear=rear->link=t;
		rear=t;
		rear->link=front;
	}
}
void dequeue()
{
	if(front==NULL)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		node *t=front;
		if(front==rear)
		{
			front=rear=NULL;
		}
		else
		{
			front=front->link;
			rear->link=front;
		}
		delete t;
	}
}
void display()
{
	if(front==NULL)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		cout<<"Queue is : "<<endl;
		node *t=front;
		do
		{
			cout<<t->data<<" ";
			t=t->link;
		}
		while(t!=front);
		cout<<endl;
	}
}
void search(int key)
{
	if(front==NULL)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		node *t=front;int i=1,flag=0;
		do
		{
			if(t->data==key)
			{
				cout<<"Element found at "<<i<<endl;
				flag=1;
				break;
			}
			i=i+1;
		}
		while(t!=front);
		if(flag==0)
		{
			cout<<"Element not found "<<endl;
		}
	}
}
void sort()
{
	if(front==NULL)
	{
		cout<<"The queue is empty "<<endl;
	}
	else
	{
		node *t=front,*t1=front;int x,y;node *s;
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
				t1=t1->link;
			}
			while(t1!=front);
			s->data=t->data;
			t->data=x;
			t=t->link;
			t1=t;
		}
		while(t!=front);
		display();	
	}
}
void create(int n)
{
	int i=1,t;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter data : "<<endl;
		cin>>t;
		enqueue(t);
	}
}
void reverse()
{
	if(front==NULL)
	{
		cout<<"The queue is empty "<<endl;
	}
	else
	{
		node *t=front,*c=rear,*p=NULL;int flag=1;
			while(flag)
			{
			p=t;
			if(t==front)
			{
				rear=t;
				t=t->link;
				rear->link=c;
			}
			else if(t->link==front)
			{
				front=t;
				p->link=c;
				flag=0;
			}
			else
			{
				t=t->link;
				p->link=c;
			}
			c=p;
		}
	}
}
void r_display(node *t)
{
	if(t!=front||c==1)
	{
		c=c+1;
		r_display(t->link);
		cout<<t->data<<" ";
	}
}
