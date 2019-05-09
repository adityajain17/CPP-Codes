//Write a program to do transpose uisng function
#include<iostream>
using namespace std;
void transpose(void);
int main()
{
	transpose();
}
void transpose(void)
{
	int a,b,i,j;
	cout<<"Enter the row and coloumn of the matrix "<<endl;
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
}
