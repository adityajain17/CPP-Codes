#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=s+i*i;
	}
	cout<<"SUM IS = "<<s<<endl;
	return 0;
}
