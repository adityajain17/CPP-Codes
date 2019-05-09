/* WAP to print all the armstrong numbers from 1 to n using for-loop */
#include <iostream>
using namespace std;
int main()
{
	int n,s=0,temp,d,x;
	cout<<"Enter the value of n "<<endl;
	cin>>n;cout<<endl;
	cout<<"Armstrong numbers within the given range are : "<<endl;
	for(int i=1;i<=n;i++)
	{
		x=i;temp=x;
		for(;x>0;)
		{
			d=x%10;
			s=s+d*d*d;
			x=x/10;
		}
		if(temp==s)
		cout<<i<<endl;
		s=0;
	}
	return 0;
}
