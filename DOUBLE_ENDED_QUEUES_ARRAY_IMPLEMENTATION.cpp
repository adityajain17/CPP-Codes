//This program is to implement dequeues(double ended queues)
#include<iostream>
using namespace std;
int q[20],front=-1,rear=-1;
void intf(int);
void intr(int);
void delf();
void delr();
void display();
int main()
{
	int ch=1,t;
	cout<<"1.Enqueue in front "<<endl;
	cout<<"2.Enqueue in rear "<<endl;
	cout<<"3.Dequeue in front "<<endl;
	cout<<"4.Dequeue in rear "<<endl;
	cout<<"5.To display "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter data : "<<endl;
				cin>>t;
				intf(t);
				break;
			case 2:
				cout<<"Enter data : "<<endl;
				cin>>t;
				intr(t);
				break;
			case 3:
				delf();
				break;
			case 4:
				delr();
				break;
			case 5:
				display();
				break;
			default:
				cout<<"Invalid Choice "<<endl;
		}
		cout<<"Enter 1 to continue and 0 to end "<<endl;
		cin>>ch;
	}
}
void intf(int item)
{
	if((front==0&&rear==19)||(rear+1==front))
	{
		cout<<"Overflow : "<<endl;
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else if(front==0)
		{
		front=19;
		}
		else
		{
			front=front-1;
		}
		q[front]=item;	
	}
}
void intr(int item)
{
	if((front==0 && rear==19)||(rear+1==front))
	{
		cout<<"Overflow : "<<endl;
	}
	else
	{
		if(front==-1)
		{
			front=rear=0;
		}
		else
		{
			rear=(rear+1)%20;
		}
		q[rear]=item;
	}	
}
void delf()
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
		cout<<"This element "<<q[front]<<" removed : "<<endl;
		rear=(front+1)%20;
	}
}
void delr()
{
	if(front==-1)
	{
		cout<<"Underflow : "<<endl;
	}
	else
	{
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(rear==0)
		{
			rear=19;
		}
		else
		{
			rear--;
		}
		cout<<q[rear+1]<<" removed : "<<endl;
	}
}
void display()
{
	if(front==-1)
	{
		cout<<"Underflow : "<<endl;
	}
	else
	{
		cout<<"The queue is : "<<endl;
		int i=front;
		for(;true;i=(i+1)%20)
		{
			cout<<q[i]<<" ";
			if(i==rear)
			break;
		}
		cout<<endl;
	}
}
