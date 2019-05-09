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
	int y=temp%10;
	cout<<"Last Digit = "<<y<<endl;
	cout<<"SUM OF FISRST AND LAST DIGIT IS = "<<x+y<<endl;
	return 0;
	
}
