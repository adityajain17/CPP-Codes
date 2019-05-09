#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"Enter number "<<endl;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	if(s==n)
	{
	cout<<"PERFECT NUMBER "<<endl;
    }
	else
	{
		cout<<"NOT A PERFECT NUMBER "<<endl;
	}
	return 0;
}
