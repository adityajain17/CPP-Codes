#include<iostream>
using namespace std;
int main()
{
	int n,x,fact=1;double s=0;float t;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"Enter the value of x "<<endl;
	cin>>x;t=x;
	for(int i=1;i<=n;i++)
	{
		for(int j=2*i-1;j>=1;j--)
		{
			fact=fact*j;
		}
		if(i%2==0)
		{
			s=s-t/fact;
		}	
		else
		{
			s=s+t/fact;
		}
		t=t*x*x;
		fact=1;
	}
	cout<<"SUM IS = "<<s<<endl;
	return 0;
}
