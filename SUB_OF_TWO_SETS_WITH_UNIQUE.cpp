#include<iostream>
using namespace std;
void input(int[],int);
void display(int[],int);
int unique(int[],int);
void sub(int[],int[],int,int);
int main()
{
	int m;
	cout<<"Enter the size of first set : "<<endl;
	cin>>m;
	int n;
	cout<<"Enter the size of second set : "<<endl;
	cin>>n;
	int a[m];int b[n];
	cout<<"Enter the elements of set 1 : "<<endl;
	input(a,m);
	cout<<endl;
	cout<<"Enter the elements of set 2 : "<<endl;
	input(b,n);
	cout<<"The elements of set 1 : "<<endl;
	display(a,m);
	cout<<"The elements of set 2 : "<<endl;
	display(b,n);
	int m1=unique(a,m);
	int n1=unique(b,n);
	cout<<"The elements of set 1 : after unique "<<endl;
	display(a,m1);
	cout<<"The elements of set 2 : after unique "<<endl;
	display(b,n1);
	sub(a,b,m1,n1);
}
void input(int x[],int y)
{
	for(int i=0;i<y;i++)
	{
		cin>>x[i];
	}
}
void display(int x[],int y)
{
	for(int i=0;i<y;i++)
	{
		cout<<x[i]<<"\t";
	}
	cout<<endl;
}
int unique(int x[],int y)
{
	int i,j,k=1;int z[y],flag=0;
	z[0]=x[0];
	for(i=0;i<y;i++)
	{
		flag=0;
		for(j=0;j<k;j++)
		{
			if(x[i]==z[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			z[k]=x[i];
			k++;
		}	
	}
	for(i=0;i<k;i++)
	{
		x[i]=z[i];
		}
		return k;	
}
void sub(int x[],int y[],int s1,int s2)
{
	int i,z[s1+s2],k=0,j,flag=0;
	for(i=0;i<s1;i++)
	{
		flag=0;
		for(j=0;j<s2;j++)
		{
			if(x[i]==y[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			z[k]=x[i];
			k++;
		}
	}
	cout<<"The subtraction of the two sets is : "<<endl;
	if(k!=0)
	{
		for(i=0;i<k;i++)
		{
			cout<<z[i]<<"\t";
		}
	}
	else
	{
		cout<<"EMPTY SET "<<endl;
	}
}
