#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,d=0;
	cout<<"Enter the number "<<endl;
	cin>>n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	cout<<"REVERSE OF THE NUMBER = "<<rev<<endl;
	return 0;
}
