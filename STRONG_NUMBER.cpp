/*WAP to check whether a number is a strong number or not 
Example=145=1!+4!+5! so it is a strong number using for-loop
*/
#include<iostream>
using namespace std;
int main()
{
	int n,s,fact=1,d=0,temp;
	cout<<"Enter the number "<<endl;
	cin>>n;
	temp=n;
	for(;n>0;)
	{
		d=n%10;
		for(int j=d;j>=1;j--)
		{
			fact=fact*j;
		}
		s=s+fact;
		fact=1;
		n=n/10;
	}
	if(s==temp)
	cout<<"Strong number "<<endl;
	else
	cout<<"Not a strong number "<<endl;
}
