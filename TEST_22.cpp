#include<iostream>
using namespace std;
int paindrome(int x)
{
	int d1=0,rev=0,temp;temp=x;
	while(x>0)
	{
		d1=x%10;
		rev=rev*10+d1;
		x=x/10;
	}
	if(rev==temp)
	return 1;
	else
	return 0;
}
int main()
{
	int dec,bin=0,d,j=1;int flag1=0,flag2=0;double s=0;int i;
	int palindrome(int);
	while(j<1000000)
	{
		dec=j;
	flag1=palindrome(dec);
	bin=0;i=1;
	while(dec>0)
	{
		d=dec%2;
		bin=bin+d*i;
		i=i*10;
		dec=dec/2;
	}
	flag2=palindrome(bin);
	if(flag1==1&&flag2==1)
	s=s+i;
	j=j+1;
	}
	cout<<s<<endl;
	return 0;
}
