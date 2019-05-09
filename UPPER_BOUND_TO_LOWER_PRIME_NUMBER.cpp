#include<iostream>
#include<math.h>
using namespace std;
int is_prime(int);
int main()
{
	int ub,lb;
	cout<<"Enter the upper bound "<<endl;
	cin>>ub;
	cout<<"Enter the lower bound "<<endl;
	cin>>lb;
	if(ub>lb)
	{
		for(int i=lb;lb<=ub;lb++)
		{
			if(is_prime(i))
			{
			cout<<i<<endl;
			}
		}
	}
	else
	{
		cout<<"Upper bound cannot be less than lower bound "<<endl;
	}
}
int is_prime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	return 1;
	else
	return 0;
}
