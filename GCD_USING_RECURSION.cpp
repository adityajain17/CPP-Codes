#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
	int a,b,z;
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
	z=gcd(a,b);
	cout<<z<<endl;
	return 0;
}
int gcd(int a,int b)
{
	if(a!=b)
	{
		if(a>b)
		gcd(a-b,b);
		else
		gcd(a,b-a);
	}
	else
	return(a);
}
