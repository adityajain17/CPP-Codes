/* WAP to convert the number from binary format to deimal format using do-while loop*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int bin,d,c=0;double dec=0;
	cout<<"Enter the number in binary "<<endl;
	cin>>bin;
	do
	{
		d=bin%10;
		dec=dec+d*pow(2,c);
		c++;
		bin=bin/10;
	}
	while(bin>0);
	cout<<"The number in decimal format is = "<<dec<<endl;
	return 0;
}
