#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter the value of row and coloumn "<<endl;
	cin>>r>>c;
	int a[r][c];int b[10],i,j,k=0,i2,j2,l,flag=0;
	cout<<"Enter the matrix elements row-wise "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	b[k]=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			flag=0;
			for(l=0;l<k;l++)
			{
				if(b[l]==a[i][j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<"The element "<<a[i][j]<<" found at "<<endl; 
				for(i2=0;i2<r;i2++)
				{
					for(j2=0;j2<c;j2++)
					{
						if(a[i][j]==a[i2][j2])
						cout<<"["<<i2+1<<"]"<<"["<<j2+1<<"]"<<endl;
					}
				}
				b[k]=a[i][j];
				k++;
			}
		}
	}
	return 0;
}
