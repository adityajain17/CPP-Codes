#include<iostream>
using namespace std;
int main()
{
	long long n,i,c,cmax=1,max=1;
	for(i=1;i<=1000000;i++)
	{
		n=i;c=0;
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
				c++;
			}
			else
			{
				n=3*n+1;
				c++;
			}
		}
		if(cmax<c)
		{
			cmax=c;
			max=i;
		}
	}
	cout<<max<<" "<<cmax<<endl;
}
