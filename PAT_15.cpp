#include<iostream>
using namespace std;
int main()
{
	int i,j,s=0,c=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=s;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=c;j++)
		{
			cout<<"*";
		}
		s=s+2;
		c--;
		cout<<endl;
	}
	s=6;c=2;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=s;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=c;j++)
		{
			cout<<"*";
		}
		s=s-2;c++;
		cout<<endl;
	}
	return 0;
}
