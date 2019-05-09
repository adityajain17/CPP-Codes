//This program is to implement tower of hanoi
#include<iostream>
using namespace std;
int c=0;
void move(int n,char beg,char aux,char end);
int main()
{
	int n;
	cout<<"Enter the number of rings : "<<endl;
	cin>>n;
	move(n,'A','B','C');
	cout<<c<<endl;
	return 0;
}
void move(int n,char beg,char aux,char end)
{
	if(n==1)
	{
		cout<<"Move "<<beg<<" -> "<<end<<endl;
		c++;
	}
	else
	{
		move(n-1,beg,end,aux);
		move(1,beg,aux,end);
		move(n-1,aux,beg,end);
	}
}
