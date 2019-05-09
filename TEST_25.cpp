#include<iostream>
using namespace std;
int main()
{
	long int s=0,i=1,j;int c=1;
	while(i<=2000000)
	{
		for(j=1;j<i/2;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==1)
		s=s+i;
		c=0;
		i=i+1;
	}
	cout<<s<<endl;
	return 0;
}
