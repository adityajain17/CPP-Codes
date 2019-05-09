#include<iostream>
using namespace std;
int main()
{
	int n,x,t,fact=1;double s=1;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"Enter the value of x "<<endl;
	cin>>x;
	t=x;
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>=1;j--)
		{
			fact=fact*j;
		}
		s=s+t/fact;
		t=t*x;
		fact=1;
	}
	cout<<"SUM IS = "<<s<<endl;
	return 0;
}
