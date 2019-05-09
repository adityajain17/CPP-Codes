//Write a program to sorting using function
#include<iostream>
using namespace std;
void input(int[],int);
void sort(int[],int);
int main()
{
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	int m[n];
	input(m,n);
	sort(m,n);
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
void sort(int x[],int y)
{
	int s,pos,i,j,t;
	for(i=0;i<y;i++)
	{
		s=x[i];pos=i;
		for(j=i;j<y;j++)
		{
			if(s>x[j])
			{
				pos=j;
				s=x[j];
			}
		}
		t=x[i];
		x[pos]=t;
		x[i]=s;
	}
	cout<<"Elements arranged in ascending order "<<endl;
	for(i=0;i<y;i++)
	{
		cout<<x[i]<<"\t";
	}
}
