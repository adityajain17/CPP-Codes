#include<iostream>
using namespace std;
int main()
{
	long double x=600851475143/2;
	cout<<x<<endl;
	unsigned long j=(int)x;int i=2;int c,k=1;
	cout<<j<<endl;
	for(;i<j;)
	{
		c=0;
		for(k=1;k<=i;k++)
		{
			if(i%k==0)
			c++;
		}
		if(c==2)
		{
			if(600851475143%k==0)
			cout<<k;	
		}
		i++;
	}
	return 0;
}
