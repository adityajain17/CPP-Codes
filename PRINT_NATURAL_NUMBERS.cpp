#include<iostream>
using namespace std;
void recur(int,int);
int main()
{
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	recur(1,n);
}
void recur(int i,int n)
{
	if(i<=n)
	{
		cout<<i<<endl;
		recur(++i,n);
	}
}
