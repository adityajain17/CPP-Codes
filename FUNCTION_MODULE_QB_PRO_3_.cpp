#include<iostream>
using namespace std;
double sum(int,double);
int main()
{
	int a;double b;
	cout<<"Enter the three numbers "<<endl;
	cin>>a>>b;
	double res=sum(a,b);
	cout<<"Result is = "<<res;
}
double sum(int x,double y)
{
	double z=(x+y)/2.0;
	return z;
}
