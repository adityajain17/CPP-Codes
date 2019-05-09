//This program is to implement queues (array implmentation)
#include<iostream>
using namespace std;
int q[20],front =-1,rear=-1;
void enqueue(int);
void dequeue();
void display();
void search(int);
void sort();
void reverse();
void create(int);
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
			default:
				cout<<"Invalid Choice "<<endl;
		}
		cout<<"Enter 1 to continue and 0 to end "<<endl;
		cin>>ch;
	}
}
void enqueue(int item)
{
	if(rear==19)
	{
		cout<<"Overflow : "<<endl;
	}
	else
	{
		rear=rear+1;
		q[rear]=item;
		if(front==-1)
		{
			front=0;
		}
	}
}
void dequeue()
{
	if(front==-1)
	{
		cout<<"Underflow : "<<endl;
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		for(int i=0;i<rear;i++)
		{
			q[i]=q[i+1];
		}
		rear=rear-1;
	}
}
void display()
{
	if(front==-1)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		cout<<"The current queue is : "<<endl;
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<" ";
		}
		cout<<endl;
	}
}
void search(int key)
{
	if(front==-1)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		int flag=0;
		for(int i=front;i<=rear;i++)
		{
			if(q[i]==key)
			{
				cout<<"Element found at "<<i+1<<" position "<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"Element not found "<<endl;
		}
	}
}
void sort()
{
	if(front==-1)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		int i=0,j=0,min,pos,t;
		for(i=0;i<=rear;i++)
		{
			min=q[i];
			pos=i;
			for(j=i+1;j<=rear;j++)
			{
				if(min>q[j])
				{
					min=q[j];
					pos=j;
				}
			}
			t=q[i];
			q[i]=min;
			q[pos]=t;
		}
	}
}
void reverse()
{
	if(front==-1)
	{
		cout<<"Queue is empty "<<endl;
	}
	else
	{
		int i=0,j=rear,t;
		while(i<j)
		{
			t=q[i];
			q[i]=q[j];
			q[j]=t;
			i=i+1;
			j=j-1;
		}
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
