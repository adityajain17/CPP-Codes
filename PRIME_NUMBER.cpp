#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cout<<"Enter number "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		cout<<"PRIME NUMBER "<<endl;
	}
	else
	{
		cout<<"NOT A PRIME NUMBER "<<endl;
	}
	return 0;
}
