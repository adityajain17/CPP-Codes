#include<iostream>
using namespace std;
int main()
{
	int s1=0,s2=0,s3=0,s4=0,s5=0;
	for(int i=1;i<=10000;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			s1=s1+j;
		}
		for(int k=1;k<s1;k++)
		{
			if(s1%k==0)
			s2=s2+k;
		}
		if(s2==i)
		s3=s3+i;
		s1=0;s2=0;
	}
	for(int i=1;i<=10000;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			s4=s4+j;
		}
		if(s4==i)
		s5=s5+i;
		s4=0;
	}
	s3=s3-s5;
	cout<<s3<<endl;
	return 0;
}
