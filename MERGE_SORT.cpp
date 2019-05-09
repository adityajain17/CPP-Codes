//This program is to implement merge sort
#include<iostream>
using namespace std;
void msort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
	int n;
	cout<<"Enter size : "<<endl;
	cin>>n;
	int a[n];int i=0;
	cout<<"Enter elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"after sorting : "<<endl;
	msort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void msort(int a[],int f,int l)
{
	int m;
	if(f<l)
	{
		m=(f+l)/2;
		msort(a,f,m);
		msort(a,m+1,l);
		merge(a,f,m,l);
	}
}

void merge(int a[],int f,int m,int l)
{
	int n1=m-f+1;
	int n2=l-m;
	int *B=new int[n1];
	int *C=new int[n2];
	for(int i=0;i<n1;i++)
	{
		B[i]=a[f+i];
	}
	for(int j=0;j<n2;j++)
	{
		C[j]=a[m+j+1];
	}
	int i=0,j=0,k=f;
	while(i<n1&&j<n2)
	{
		if(B[i]<=C[j])
		a[k++]=B[i++];
		else
		a[k++]=C[j++];
	}
	while(i<n1)
	{
		a[k++]=B[i++];
	}
	while(j<n2)
	{
		a[k++]=C[j++];
	}
}
