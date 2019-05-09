/*WAP to convert a number from any format (except hexa decimal) to decimal format using do-while loop*/ 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,d,x,c=0;double dec=0;
	cout<<"Enter the format from which you want to convert to decimal "<<endl;
	cin>>x;
	cout<<"Enter the number in that format "<<endl;
	cin>>n;
	do
	{
		d=n%10;
		dec=dec+d*pow(x,c);
		c++;
		n=n/10;
	}
	while(n>0);
	cout<<"The number in decimal format is = "<<dec<<endl;
	return 0;
}
