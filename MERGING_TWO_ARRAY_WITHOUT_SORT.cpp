//Write a program to merge using function
#include<iostream>
using namespace std;
void input(int[],int);
void merge(int[],int[],int,int);
int main()
{
	int a,b;
	cout<<"Enter the size for matrix 1 : "<<endl;
	cin>>a;
	int m1[a];
	input(m1,a);
	cout<<"Enter the size for matrix 2 : "<<endl;
	cin>>b;
	int m2[b];
	input(m2,b);
	merge(m1,m2,a,b);
	return 0;
}
void input(int x[],int y)
{
	cout<<"Enter the array elements "<<endl;
	for(int i=0;i<y;i++)
	{
		cin>>x[i];
	}
}
void merge(int x[],int y[],int s1,int s2)
{
	int z[s1+s2],i,k=0;
	for(i=0;i<s1;i++)
	{
		z[k]=x[i];
		k++;
	}
	for(i=0;i<s2;i++)
	{
		z[k]=y[i];
		k++;
	}
	cout<<"Merged Array is : "<<endl;
	for(i=0;i<(s1+s2);i++)
	{
		cout<<z[i]<<"\t";
	}
}
