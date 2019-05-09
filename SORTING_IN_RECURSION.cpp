#include<iostream>
using namespace std;
void sort(int[],int);
int c=0;
int main()
{
	int n;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elemnts of the array "<<endl;
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
	}
	sort(a,n);
}
void sort(int x[],int y)
{
	int min,pos,t;
	if(c<y)
	{	
	min=x[c];pos=c;
	for(int i=c;i<y;i++)
	{
		if(min>x[i])
		{
			min=x[i];
			pos=i;
		}
	}
	t=x[c];
	x[c]=min;
	x[pos]=t;
	c++;
	sort(x,y);	
	}
	else
	{
		cout<<"Sorted Array in ascending order : "<<endl;
		for(int i=0;i<y;i++)
		{
			cout<<x[i]<<"\t";
		}
		exit(0);
	}
}
