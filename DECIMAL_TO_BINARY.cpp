/* WAP to convert the number entered by the user in decimal format to binary using do-while loop */
#include<iostream>
using namespace std;
int main()
{
	int dec,bin=0,d,i=1;
	cout<<"Enter the number in decimal format "<<endl;
	cin>>dec;
	do
	{
		d=dec%2;
		bin=bin+d*i;
		i=i*10;
		dec=dec/2;
	}
	while(dec>0);
	cout<<"The number in binary format is = "<<bin;
	return 0;
}
