#include<iostream>
using namespace std;
int main()
{
	int a[5][5],i,j;int max;int pos=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter marks of student : "<<i+1<<endl;
		for(j=0;j<5;j++)
		{
			cout<<"Enter marks in subject : "<<j+1<<endl;
			cin>>a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		max=a[0][i];pos=0;
		for(j=0;j<5;j++)
		{
			if(max<a[j][i])
			{
				max=a[j][i];
				pos=j;
			}
		}
		cout<<"Highest of subject "<<i+1<<" is "<<max<<" scored by student "<<pos+1<<endl;
		cout<<endl;
	}
	return 0;
}
