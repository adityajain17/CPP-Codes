#include<iostream>
using namespace std;
class palin_check
{
	public:
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
};
int main()
{
	double dec,bin=0,i=1,j=1,flag1=0,flag2=0;double s=0;int d;
	while(j<1000000)
	{
		dec=j;bin=0;i=1;
		palin_check h;
		flag1=h.paindrome(dec);
		while(dec>0)
		{
		d=(int)dec%2;
		bin=bin+d*i;
		i=i*10;
		dec=dec/2;
		}
		flag2=h.paindrome(bin);
		if(flag1==1&&flag2==2)
		{
			s=s+j;
		}
		j=j+1;
	}
	cout<<s<<endl;
	return 0;
}
