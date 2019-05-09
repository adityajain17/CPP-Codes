#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,d=0,temp;
	cout<<"Enter the number "<<endl;
	cin>>n;
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(temp==rev)
	cout<<"PALINDROME NUMBER "<<endl;
	else
	cout<<"NOT A PALINDROME NUMBER "<<endl;
	return 0;
}
