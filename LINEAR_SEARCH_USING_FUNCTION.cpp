//Write a program to do linear search using function
#include<iostream>
using namespace std;
void input(int[],int);
void search(int[],int,int);
int main()
{
	int n,se;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	int m[n];
	input(m,n);
	cout<<"Enter the element to be searched "<<endl;
	cin>>se;
	search(m,se,n);
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
void search(int x[],int key,int y)
{
	int flag=0;
	for(int i=0;i<y;i++)
	{
		if(x[i]==key)
		{
			cout<<"Element found at "<<i+1;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"Element not found "<<endl;
}
