//This program is to implement queues(using linked list)
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
}*front=NULL,*rear=NULL;
void enqueue(int);
void dequeue();
void display();
void search(int);
void sort();
void reverse();
void create(int);
void r_display(node*);
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
	}
	else
	{
		rear->link=t;
		rear=t;
	}
}
void dequeue()
{
	if(front==NULL)
	{
		cout<<"The queue is empty : "<<endl;
	}
	else
	{
		if(front==rear)
		{
			front=rear=NULL;
		}
		else
		{
			front=front->link;	
		}
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
		cout<<"The queue is : "<<endl;
		node *t=front;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->link;
		}
		cout<<endl;
	}
}
void search(int key)
{
	if(front==NULL)
	{
		cout<<"The queue is empty : "<<endl;
	}
	else
	{
		node *t=front;int i=1,flag=0;
		while(t!=NULL)
		{
			if(t->data==key)
			{
				cout<<"The element found at : "<<i<<" position"<<endl;
				flag=1;
				break;
			}
			t=t->link;
			i=i+1;
		}
		if(flag==0)
		{
			cout<<"Element not found : "<<endl;
		}
	}
}
void sort()
{
	if(front==NULL)
	{
		cout<<"The queue is empty : "<<endl;
	}
	else
	{
		node *t=front,*te,*s;int max;
		while(t!=NULL)
		{
			s=t;
			max=t->data;
			while(te!=NULL)
			{
				if(max<te->data)
				{
					s=te;
					max=te->data;
				}
				te=te->link;
			}
			s->data=t->data;
			t->data=max;	
		}
	}
}
void reverse()
{
	if(front==NULL)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		node *t=front,*c,*p=NULL;
		while(t!=NULL)
		{
			c=t;
			t=t->link;
			if(c==front)
			{
				rear=c;
			}
			if(t==NULL)
			{
				front=c;
			}
			c->link=p;
			p=c;
		}
	}
}
void create(int n)
{
	int i=1,t;
	while(i<=n)
	{
		cout<<"Enter data : "<<endl;
		cin>>t;
		enqueue(t);
		i=i+1;
	}
}
void r_display(node *t)
{
	if(t!=NULL)
	{
		r_display(t->link);
		cout<<t->data<<" ";
	}
}
