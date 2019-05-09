#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the number of rows "<<endl;
	cin>>n;
	int d=n*2-1;
	int a[n][d]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<d;j++)
		{
			a[i][j]=0;
		}
	}
	a[0][d/2]=1;
	for(i=0;i<n;i++)
	{
		if(i!=0)
		{
			for(j=0;j<d;j++)
			{
				if(j==0)
				a[i][j]=a[i-1][j]+a[i-1][j+1];
				else if(j==d-1)
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				else
				a[i][j]=a[i-1][j-1]+a[i-1][j+1];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<d;j++)
		{
			if(a[i][j]==0)
			cout<<"  ";
			else
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
