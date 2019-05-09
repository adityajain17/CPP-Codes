#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a,b,c,d;
	cout<<"Enter the order of the first matrix "<<endl;
	cin>>a>>b;
	cout<<"Enter the order of the second-matrix "<<endl;
	cin>>c>>d;
	int m1[a][b];int m2[c][d];
	int pro[a][d]={0};
	if(b==c)
	{
		cout<<"MULTIPLICATION POSSIBLE "<<endl;
		cout<<endl;
		cout<<"ENTER MATRIX 1 ROW_WISE "<<endl;
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				cin>>m1[i][j];
			}
		}
		cout<<"ENTER MATRIX 2 ROW_WISE "<<endl;
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				cin>>m2[i][j];
			}
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				for(k=0;k<b;k++)
				{
					pro[i][j]=pro[i][j]+m1[i][k]*m2[k][j];
				}
			}
		}
		cout<<"THE ANSWER IS = "<<endl;
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				cout<<pro[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"MULTIPLICATION NOT POSSIBLE "<<endl;
	}
	return 0;
}
