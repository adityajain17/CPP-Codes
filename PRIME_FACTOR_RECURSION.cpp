#include<iostream>
using namespace std;
int prime_fact(int);
int prime_check(int,int);
int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	prime_fact(n);
}
int prime_fact(int num)
{
	static int i=1;
	if(i<=num)
	{
		if(num%i==0)
		{
			if(prime_check(i,2))
			cout<<i<<endl;
		}
		i++;
		prime_fact(num);
	}
}
int prime_check(int x,int j)
{
	if(j<=x/2)
	{
		if(x%j==0)
		return 0;
		j++;
		prime_check(x,j);
	}
	if(j>x/2)
	return 1;
}
