#include<iostream>
using namespace std;
int main()
{
	int x[100],y;int i;
	cout<<"Enter the number of elements "<<endl;
	cin>>y;
	cout<<"Enter the array elements "<<endl;
	for(i=0;i<y;i++)
	{
		cin>>x[i];
	}
	int s,pos,j,t;
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
