//This program is to implement various opeartions on satcks array implementation
#include<iostream>
using namespace std;
int stack[20],top=-1;
void push()
{
	if(top==19)
	{
		cout<<"The stack is full "<<endl;
	}
	else
	{
		int t;
		cout<<"Enter data "<<endl;
		cin>>t;
		top++;
		stack[top]=t;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		int t=stack[top];
		top--;
		cout<<"The element deleted is "<<t<<endl;
	}
}
void display()
{
	if(top==-1)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		cout<<"The current stack is : "<<endl;
		int i=top;
		while(i>=0)
		{
			cout<<stack[i]<<endl;
			i=i-1;
		}
	}
}
void search(int key)
{
	if(top==-1)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		int i=0,flag=0;
		while(i<=top)
		{
			if(key==stack[i])
			{
				cout<<"Element found at "<<i+1<<endl;
				flag=1;
				break;
			}
			i=i+1;
		}
		if(flag==0)
		cout<<"Element not found "<<endl;
	}
}
void sort()
{
	if(top==-1)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		int i=top,j=top,pos,max;
		for(i=0;i<=top;i++)
		{
			pos=i;
			max=stack[i];
			for(j=i+1;j<=top;j++)
			{
				if(max<stack[j])
				{
					max=stack[j];
					pos=j;
				}
			}
			stack[pos]=stack[i];
			stack[i]=max;
		}
	}
}
void reverse()
{
	if(top==-1)
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{
		int i=0,j=top,t;
		while(i<j)
		{
			t=stack[i];
			stack[i]=stack[j];
			stack[j]=t;
			i=i+1;
			j=j-1;
		}
	}
}
void create(int n)
{
	int i=1;
	while(i<=n)
	{
		push();
		i=i+1;
	}
}
int main()
{
	int ch=1,t;
	cout<<"1.To push "<<endl;
	cout<<"2.To pop "<<endl;
	cout<<"3.To display "<<endl;
	cout<<"4.To search for a particular element "<<endl;
	cout<<"5.To sort in ascending order "<<endl;
	cout<<"6.To reverse the stack "<<endl;
	cout<<"7.To create n nodes at a time "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
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
