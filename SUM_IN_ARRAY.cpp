#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	cout<<"Enter the order of the matrix you want to add "<<endl;
	cin>>a>>b;
	int m1[a][b],m2[a][b],s[a][b];
	cout<<"Enter the elements of the matrix 1 row-wise "<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>m1[i][j];
		}
	}
	cout<<"Enter the elements of the matrix 2 row-wise "<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>m2[i][j];
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			s[i][j]=m1[i][j]+m2[i][j];
		}
	}
	cout<<"The sum is = "<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
