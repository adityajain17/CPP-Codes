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
	int z=pow(10,c-1);
	int x=temp/z;
	cout<<"First Digit = "<<x<<endl;
	int y=temp%10;
	cout<<"Last Digit = "<<y<<endl;
	n=y*z;
	n=n+temp%z;
	n=n-y;
	n=n+x;
	cout<<"Swapped Number = "<<n;
	return 0;
	
	
}
