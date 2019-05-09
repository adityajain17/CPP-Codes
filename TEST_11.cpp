#include<iostream>
using namespace std;
int main()
{
	int s=0;
	int a=0,b=1,c=0;
	while(c<=4000000)
	{
		c=a+b;
		a=b;b=c;
		if(c%2==0)
		s=s+c;
	}
	cout<<s<<endl;
	return 0;
}
