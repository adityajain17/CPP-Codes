/* WAP to convert the number entered in decimal format to any format according to user's choice except hexadecimal using do-while loop */
#include<iostream>
using namespace std;
int main()
{
	int dec,x,d,i=1,res=0;
	cout<<"Enter the number in decimal format "<<endl;
	cin>>dec;
	cout<<"Enter the format in which you want to convert "<<endl;
	cin>>x;
	do
	{
		d=dec%x;
		res=res+d*i;
		i=i*10;
		dec=dec/x;
	}
	while(dec>0);
	cout<<"The number in desired format is = "<<res;
	return 0;
}
