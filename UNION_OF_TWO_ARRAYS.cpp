#include<iostream>
using namespace std;
void input(int[],int);
void display(int[],int);
void unio(int[],int[],int,int);
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
	unio(a,b,m,n);	
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
void unio(int x[],int y[],int s1,int s2)
{
	int z[s1+s2],k=0,i,j,flag=0;
	for(i=0;i<s1;i++)
	{
		z[k]=x[i];
		k++;
	}
	for(i=0;i<s2;i++)
	{
		flag=0;
		for(j=0;j<k;j++)
		{
			if(y[i]==z[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			z[k]=y[i];
			k++;
		}
	}
	cout<<"The union is  : "<<endl;
	for(i=0;i<k;i++)
	{
		cout<<z[i]<<"\t";
	}
}
