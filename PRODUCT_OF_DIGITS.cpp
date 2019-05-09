/* WAP to find the product of the digits of the number entered by the user using for-loop */
#include<iostream>
using namespace std;
int main()
{
	int n,d=0,pro=1;
	cout<<"Enter the number "<<endl;
	cin>>n;
	for(;n>0;)
	{
		d=n%10;
		pro=pro*d;
		n=n/10;
	}
	cout<<"Product of the digits is = "<<pro;
	return 0;
}
