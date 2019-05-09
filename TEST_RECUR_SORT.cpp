#include<iostream>
using namespace std;
int c=0;
void sort(int x[],int y);
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
	cout<<endl;
	sort(a,n);
}
void sort(int x[],int y)
{
	int i,min,pos,t;
	min=x[c];
	for(i=c;i<y;i++)
	{
		cout<<"hi "<<c<<" "<<endl;
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
	for(i=0;i<y;i++)
	{
		cout<<x[i]<<" "<<endl;
	}
}
