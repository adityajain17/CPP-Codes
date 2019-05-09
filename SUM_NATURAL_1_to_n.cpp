#include<iostream>
using namespace std;
int main()
{
	int s=0,n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	cout<<"Sum = "<<s<<endl;
	return 0;
}
