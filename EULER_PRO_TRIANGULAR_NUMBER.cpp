#include<iostream>
using namespace std;
int main()
{
	long long k,j;long long x;int c=0;
	for(j=1;;j++)
	{
		c=0;x=0;
		for(k=1;k<=j;k++)
		{
			x=x+k;
		}
		for(k=1;k<=x;k++)
		{
			if(x%k==0)
			{
				c=c+1;
			}
		}
		if(c>500)
		{
			cout<<x<<endl;
			break;
		}
	}
	return 0;
}
