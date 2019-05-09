#include<iostream>
using namespace std;
int main()
{
	int c=0;
	int x=0;int i=1;
	while(x<10001)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		{
		++x;
		}
		if(x==10001)
		cout<<i<<endl;
		c=0;
		i++;
	}
	return 0;
}
