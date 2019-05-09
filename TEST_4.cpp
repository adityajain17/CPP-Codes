#include<iostream>
using namespace std;
int prime_check(int x)
{
	int c=0;
	for(int j=1;j<=x;j++)
	{
		if(x%j==0)
		c++;
	}
	if(c==2)
	return 1;
	else
	return 0;
}
int main()
{
	int flag;int x=(int)(600851475143/2);
	for(int i=x;i>1;i--)
	{
		if(600851475143%i==0)
		{
		flag=prime_check(i);
		}
		if(flag==1)
		{
			cout<<i<<endl;
			break;
		}
	}
}
