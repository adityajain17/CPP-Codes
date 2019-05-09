/*WAP to convert from octal format to decimal format using do-while loop*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int octal,d,c=0;double dec=0;
	cout<<"Enter the number in octal "<<endl;
	cin>>octal;
	do
	{
		d=octal%10;
		dec=dec+d*pow(8,c);
		c++;
		octal=octal/10;
	}
	while(octal>0);
	cout<<"The number in decimal format is = "<<dec<<endl;
	return 0;
}
