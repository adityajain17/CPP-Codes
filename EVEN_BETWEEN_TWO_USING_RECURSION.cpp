#include<iostream>
using namespace std;
void even(int,int);
int main()
{
	int lb,ub;
	cout<<"Enter the lower limit "<<endl;
	cin>>lb;
	cout<<"Enter the upper limit "<<endl;
	cin>>ub;
	if(ub>lb)
	{
		even(lb,ub);
	}
}
void even(int x,int y)
{
	if(x<=y)
	{
		if(x%2==0)
		{
			cout<<x<<endl;
			even(x+1,y);
		}
		else
		{
			even(x+1,y);
		}
	}
}
