#include<iostream>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n>>k;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(int j=0;j<n;j++)
		{
			if(k>0&&k>=a[j])
			{
				k=k-a[j];
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
