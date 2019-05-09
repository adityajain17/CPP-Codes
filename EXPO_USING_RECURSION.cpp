#include<iostream>
using namespace std;
int exponent(int,int);
int main()
{
	int x,y;
	cout<<"Enter the value of x and y "<<endl;
	cin>>x>>y;
	cout<<"Answer : "<<exponent(x,y);
}
int exponent(int a,int b)
{
	static int i=1;
	if(i<=b)
	{
		i++;
		return(a*exponent(a,b));	
	}
	else
	{
		return 1;
	}
}
