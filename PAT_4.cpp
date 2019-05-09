#include<iostream>
using  namespace std;
int main()
{
	int i,j,k,l;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>i;j--)
		{
			cout<<"   ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<k<<"  ";
		}
		cout<<endl;
	}
}
