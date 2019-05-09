/* WAP to print the multiples of any number entered by the user upto where the user wants using do-while loop*/
#include<iostream>
using namespace std;
int main()
{
	int n,x,pro=1;
	cout<<"Enter the number whose table you want "<<endl;
	cin>>n;
	cout<<"Enter till where you want the table "<<endl;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		pro=n*i;
		cout<<n<<" * "<<i<<" = "<<pro<<endl;
	}
	return 0;
}
