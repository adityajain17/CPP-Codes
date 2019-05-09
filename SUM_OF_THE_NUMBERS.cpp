/* WAP to find the sum of all the numbers entered by the user and stop when the user enters zero using do-while loop */
#include<iostream>
using namespace std;
int main()
{
	int sum=0,n;
	cout<<"Keep on entering the number and enter the number zero to stop "<<endl;
	do
	{
		cout<<"Enter the number "<<endl;
		cin>>n;
		sum=sum+n;
	}
	while(n!=0);
	cout<<"SUM IS = "<<sum;
	return 0;
}
