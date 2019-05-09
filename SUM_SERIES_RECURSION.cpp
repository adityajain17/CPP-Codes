#include<iostream>
#include<math.h>
using namespace std;
double sum(int,double,int);
int fact(int);
int main()
{
	int n,x;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"Enter the value of x "<<endl;
	cin>>x;
	sum(n-1,1,x);
}
double sum(int l,double su,int c)
{
	static int i=1;
	if(i<=l)
	{
		su=su+pow(c,i)/fact(i);
		i++;
		sum(l,su,c);
	}
	else
	{
		cout<<"Sum is = "<<su<<endl;
	}
}
int fact(int j)
{
	if(j>1)
	return(j*fact(j-1));
	else
	return 1;
}
