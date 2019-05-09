#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	cout<<"Enter the order of the matrix "<<endl;
	cin>>a>>b;
	int arr[a][b];
	cout<<"Enter the elements of the array row-wise "<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>arr[i][j];
		}
	}
	int tr[b][a];
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			tr[i][j]=arr[j][i];
		}
	}
	cout<<"The transpose is "<<endl;
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			cout<<tr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
