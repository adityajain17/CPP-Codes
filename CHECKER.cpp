#include<iostream>
using namespace std;
int lthunder(int[],int,int);
int main()
{
	int e=100;int n,k,i=0;int t=0;
	cin>>n>>k;
	int c[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	do
	{
		t=(t+k)%n;
		if(lthunder(c,t,n)==1)
		{
			e=e-1-2;
		}
		else
		{
			e=e-1;
		}
	}
	while(t!=0);
	cout<<e<<endl;
}
int lthunder(int a[],int key,int size)
{
	if(a[key]==1)
	return 1;
	else
	return 0;
}
