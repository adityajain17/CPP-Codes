#include<iostream>
using namespace std;
void input(int*[],int,int);
void display(int*[],int,int);
int main()
{
	int m[10][10];
	int r,c;
	cout<<"Enter the value of row and coloumnn "<<endl;
	cin>>r>>c;
	cout<<&m[0][0]<<" "<<&m[1][0]<<" "<<&m[2][0];
	int *ptr[r];
	for(int i=0;i<r;i++)
	{
		ptr[i]=m[i];
		cout<<ptr[i]<<endl;
	}
	input(ptr,r,c);
	display(ptr,r,c);
}
void input(int *m[],int a,int b)
{
	cout<<"Enter the array elements "<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
		cin>>*(m[i]+j);
		}
	}
}
void display(int *m[],int a,int b)
{
	cout<<"the array elements "<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
		cout<<*(m[i]+j)<<"\t";
		}
		cout<<endl;
	}
}
