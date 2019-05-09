#include<iostream>
using namespace std;
int recursion(int,int);
int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	int res=recursion(n,0);
	cout<<res;
	return 0;
}
int recursion(int num,int r)
{
	int d=0;
	if(num>0)
	{
		d=num%10;
		r=r*10+d;
		recursion(num/10,r);
	}
}
