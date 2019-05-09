#include<iostream>
using namespace std;
char pn(double);
int main()
{
	double n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	char x=pn(n);
	cout<<"Result is = "<<x;
	return 0;
}
char pn(double num)
{
	if(num>=0)
	{
		return('P');
	}
	else
	{
		return('N');
	}
}
