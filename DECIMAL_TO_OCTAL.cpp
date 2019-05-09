/*WAP to convert the number entered by the user in decimal format to octal using do-while loop*/
#include<iostream>
using namespace std;
int main()
{
	int dec,octal=0,d,i=1;
	cout<<"Enter the number in decimal format "<<endl;
	cin>>dec;
	do
	{
		d=dec%8;
		octal=octal+d*i;
		i=i*10;
		dec=dec/8;
	}
	while(dec>0);
	cout<<"The number in octal format is = "<<octal;
	return 0;
}
