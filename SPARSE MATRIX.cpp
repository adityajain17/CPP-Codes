#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the number of rows and coloums "<<endl;
	cin>>r>>c;
	int ctr=0;
	int a[r][c];
	cout<<"Enter the array elements "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==0)
			ctr++;
		}
	}
	if(ctr>(r*c)/2)
	cout<<"Sparse Matrix ";
	else
	cout<<"Dense Matrix ";
	return 0;
}
