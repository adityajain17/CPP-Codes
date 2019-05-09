#include<iostream>
using namespace std;
int main()
{
	int n,s=0,d=0;
	cout<<"Enter the number "<<endl;
	cin>>n;
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	cout<<"SUM OF DIGITS = "<<s<<endl;
	return 0;
}
