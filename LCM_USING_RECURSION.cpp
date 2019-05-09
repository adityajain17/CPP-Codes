#include<iostream>
using namespace std;
int lcm(int,int);
int main()
{
	int a,b;
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
	cout<<"LCM IS = "<<lcm(a,b);
}
int lcm(int x,int y)
{
	static int i=1;
	if(i%x==0&&i%y==0)
	{
	return i;
	}
	else
	{
	i++;
	lcm(x,y);
	}
}
