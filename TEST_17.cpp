#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c=0,i=0,temp,d;
	while(c!=3)
	{
	c=a+b;
	a=b;
	b=c;
	temp=c;d=0;
	while(c>0)
	{
		temp=temp/10;
		c++;
	}
	if(c==3)
	{
	cout<<c<<endl;
	break;
	}
}
}
