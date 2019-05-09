#include<iostream>
using namespace std;
int natural(int,int);
int main()
{
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	natural(1,n);	
}
int natural(int i,int num)
{
	if(i<=num)
	{
		cout<<i<<endl;
		natural(++i,num);
	}
}
