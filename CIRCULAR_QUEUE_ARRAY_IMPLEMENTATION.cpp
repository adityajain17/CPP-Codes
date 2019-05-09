//This program is to implement circular queue(using arrays)
#include<iostream>
using namespace std;
int q[5],front =-1,rear=-1;
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
	cout<<"4.To search for a element "<<endl;
	cout<<"5.To sort in ascending order "<<endl;
	cout<<"6.To reverse the queue "<<endl;
	cout<<"7.To add n item in the queue "<<endl;
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
				cout<<"Enter the element to be searched : "<<endl;
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
				cout<<"Enter the value of n "<<endl;
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
	if((front==0&&rear==4)||(rear==front-1))
	{
		cout<<"Overflow : "<<endl;
	}
	else
	{
		rear=(rear+1)%5;
		q[rear]=item;
		if(front==-1)
		front=0;
		cout<<"Front : "<<front<<endl;
		cout<<"Rear : "<<rear<<endl;
	}
}
void dequeue()
{
	if(front==-1)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else if(front==rear)
	{
		front=rear=-1;
		cout<<"Front : "<<front<<endl;
		cout<<"Rear : "<<rear<<endl;
	}
	else
	{
		front=(front+1)%5;
		cout<<"Front : "<<front<<endl;
		cout<<"Rear : "<<rear<<endl;
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
		cout<<"Queue is : "<<endl;
		if(front<=rear)
		{
			int i=front;
			for(i=front;i<=rear;i++)
			{
				cout<<q[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			int i=front;
			for(i=front;i<=4;i++)
			{
				cout<<q[i]<<" ";
			}
			i=0;
			for(i=0;i<=rear;i++)
			{
				cout<<q[i]<<" ";
			}
			cout<<endl;
		}
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
		int i=0,flag=0;
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				if(q[i]==key)
				{
					cout<<"Element found at "<<i<<" position "<<endl;
					flag=1;
					break;
				}
			}
		}
		else
		{
			for(i=front;i<=4;i++)
			{
				if(q[i]==key)
				{
					cout<<"Element found at "<<i<<" position "<<endl;
					flag=1;
					break;
				}
			}
			i=0;
			if(flag==0)
			{
				for(i=0;i<=rear;i++)
				{
					if(q[i]==key)
					{
						cout<<"Element found at "<<i<<" position "<<endl;
						flag=1;
						break;
					}
				}
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
		int i,j,min,pos,t;
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
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
		else
		{
			for(i=front;i<=4;i++)
			{
				for(j=i+1;j<=4;j++)
				{
					if(min>q[j])
					{
						min=q[j];
						pos=j;
					}
				}
				for(j=0;j<=rear;j++)
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
}
void reverse()
{
	if(front==-1)
	{
		cout<<"Queue is empty : "<<endl;
	}
	else
	{
		int i,j;
		if(front<rear)
		{
			i=front;j=rear;int t;
			while(i<j)
			{
				t=q[i];
				q[i]=q[j];
				q[j]=t;
				i=i+1;
				j=j-1;
			}
		}
		else
		{
			i=rear;j=front;int t;
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
