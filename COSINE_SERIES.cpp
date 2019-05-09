#include<iostream>
using namespace std;
int main()
{
	int n,x,fact=1;double s=1;float t;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"Enter the value of x "<<endl;
	cin>>x;t=x*x;
	for(int i=1;i<n;i++)
	{
		for(int j=2*i;j>=1;j--)
		{
			fact=fact*j;
		}
		if(i%2==0)
		{
			s=s+t/fact;
		}	
		else
		{
			s=s-t/fact;
		}
		fact=1;
		t=t*x*x;
	}
	cout<<"SUM IS = "<<s<<endl;
	return 0;
}
