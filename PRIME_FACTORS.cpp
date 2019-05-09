/*WAP to find the prime factors of any number entered by the user using do-while loop */
#include<iostream>
using namespace std;
int main()
{
	int n,c=0,i=2,j;
	cout<<"Enter the number "<<endl;
	cin>>n;
	cout<<"PRIME FACTORS ARE "<<endl;
	do
	{
		if(n%i==0)
		{
			j=1;c=0;
			do
			{
				if(i%j==0)
				c++;
				j++;
			}
			while(j<=i);
			if(c==2)
			cout<<i<<endl;
		}
		i++;
	}
	while(i<=n);
	return 0;
}
