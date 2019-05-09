#include<iostream>
using namespace std;
int digif(int,int);
void win(int[],int,int,int);
int main()
{
	int n,md,fd;
	cout<<"Enter the number of partcipants "<<endl;
	cin>>n;
	cout<<"Enter the must have digit (1-9) "<<endl;
	cin>>md;
	cout<<"Enter the factor digit (1-9) "<<endl;
	cin>>fd;
	int *arr=new int [n];
	for(int i=0;i<n;i++)
	{
		arr[i]=i;
	}
	win(arr,n,md,fd);
}
void win(int ptr[],int p,int md,int fd)
{
	cout<<"The winning numbers are : "<<endl;
	for(int i=0;i<p;i++)
	{
		int x=digif(ptr[i],md);
		if(x==1&&ptr[i]%fd==0)
		{
			cout<<ptr[i]<<"\t";
		}
	}
}
int digif(int num,int x)
{
	while(num>0)
	{
		int d=num%10;
		if(d==x)
		{
			return 1;
		}
		num=num/10;
	}
	if(num==0)
	return 0;
}
