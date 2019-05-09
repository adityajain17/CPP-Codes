#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,d=0,c=0,temp;
	cout<<"Enter the number "<<endl;
	cin>>n;
	temp=n;
	while(n>0)
	{
		d=n%10;
		c++;
		n=n/10;
	}
	int x=temp/(pow(10,c-1));
	cout<<"First Digit = "<<x<<endl;
	x=temp%10;
	cout<<"Last Digit = "<<x<<endl;
	return 0;
	
}
