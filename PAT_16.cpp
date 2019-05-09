#include<iostream>
using namespace std;
int main()
{
	int i,j;int c=1;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			cout<<" ";
		}
		for(j=5;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		c=c+1;
		cout<<endl;
	}
	return 0;
}
