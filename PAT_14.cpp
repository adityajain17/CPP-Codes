#include<iostream>
using namespace std;
int main()
{
	int i,j,k;int c=1;int c1=5;
	for(k=1;k<=5;k++)
	{
		for(i=1;i<=c1;i++)
		{
			cout<<"* ";
		}
		for(j=2;j<=c;j++)
		{
			cout<<"  ";
		}
		for(i=1;i<=c1;i++)
		{
			cout<<"* ";
		}
		c=c+2;
		c1--;
		cout<<endl;
	}
	c1=1;c=8;
	for(k=5;k>=1;k--)
	{
		for(i=1;i<=c1;i++)
		{
			cout<<"* ";
		}
		for(j=1;j<=c;j++)
		{
			cout<<"  ";
		}
		for(i=1;i<=c1;i++)
		{
			cout<<"* ";
		}
		c1++;
		c=c-2;
		cout<<endl;
	}
	return 0;
}
