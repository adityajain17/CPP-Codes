#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int n,r;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"Enter the value of r "<<endl;
	cin>>r;
	double res=factorial(n)/(factorial(r)*factorial(n-r));
	cout<<"Value of nCr = "<<res<<endl;
}
int factorial(int x)
{
	if(x>1)
	{
		return(x*factorial(x-1));
	}
}
