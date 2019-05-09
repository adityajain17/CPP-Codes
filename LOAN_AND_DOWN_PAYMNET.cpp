#include<iostream>
using namespace std;
double mot(double);
double tax(double);
int main()
{
	double price,dp;int ctr=1;double mor,ta;
	while(ctr)
	{
	cout<<"Enter the price of the house "<<endl;
	cin>>price;
	cout<<"Enter the down payment "<<endl;
	cin>>dp;
	mor=mot(price-dp);
	ta=tax(0.06*(price-dp));
	cout<<"ANNUAL PAY "<<mor-ta<<endl;
	cout<<"Do you want to coninue (N/Y) (0/1) "<<endl;
	cin>>ctr;
	return 0;
	}
}
double mot(double loan)
{
	return(0.09*loan);
}
double tax(double la)
{
	return(0.35*la);
}
