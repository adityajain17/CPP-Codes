#include<iostream>
using namespace std;
int main()
{
	for(int i=7;i>=1;i=i-2)
	{
		for(int j=i;j<7;j=j+2)
		{
			cout<<"  ";
		}
		for(int k=1;k<=i;k++)
		{
			if(k%2==0)
			cout<<"0 ";
			else
			cout<<"1 ";
		}
		cout<<endl;
	}
	return 0;
}
