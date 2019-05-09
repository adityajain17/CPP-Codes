#include<iostream>
using namespace std;
int main()
{
	int n,d=0,c=0;
	cout<<"Enter the number "<<endl;
	cin>>n;
	while(n>0)
	{
		d=n%10;
		c++;
		n=n/10;
	}
	cout<<"The no. of digits is = "<<c<<endl;
	return 0;
}
