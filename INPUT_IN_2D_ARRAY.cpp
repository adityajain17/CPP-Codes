#include<iostream>
using namespace std;
void input(int[][10],int,int);
void transpose(int [][10],int,int);
int main()
{
	int r,c;
	cout<<"Enter the value of row "<<endl;
	cin>>r;
	cout<<"Enter the value of coloumn "<<endl;
	cin>>c;
	int m[10][10];
	input(m,r,c);
	cout<<"Transpose of the above matrix is : "<<endl;
	transpose(m,r,c);
}
void input(int x[][10],int a,int b)
{
	cout<<"Enter the array elements "<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
		cin>>x[i][j]; 
		}
	}
}
void transpose(int x[][10],int a,int b)
{
	int i,j;int y[b][a];
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			y[i][j]=x[j][i];
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			cout<<y[i][j]<<" ";
		}
		cout<<endl;
	}
}
