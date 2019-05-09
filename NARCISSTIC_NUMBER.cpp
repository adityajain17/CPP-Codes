/* WAP to check whether the number entered by the user is a narcisstic number or not . Well armstrong number is also a narcisstic number as for e.g 153 has 3 digits so find the sum of 
   the cube of each digit and compare it with the original number same way if it is a 2 digit number we will find the sum of the squares of the digits of the number and comapre it with
   the original number using for-loop */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,fact=1,d=0,temp,c=0;double s=0;
	cout<<"Enter the number "<<endl;
	cin>>n;
	temp=n;
	for(;n>0;)
	{
		d=n%10;
		n=n/10;
		c++;
	}
	n=temp;
	for(;n>0;n)
	{
		d=n%10;
		s=s+pow(d,c);
		n=n/10;
	}
	if(s==temp)
	cout<<"Narcissitic number "<<endl;
	else
	cout<<"Not a narcissitic number "<<endl;
	return 0;
}
