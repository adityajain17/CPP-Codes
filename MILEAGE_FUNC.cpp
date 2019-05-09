#include<iostream>
using namespace std;
# define li 0.264179
double mileage(double,double);
int main()
{
	double lit,mi;
	cout<<"Enter the number of miles "<<endl;
	cin>>mi;
	cout<<"Enter the number of litres used "<<endl;
	cin>>lit;
	double res=mileage(mi,lit);
	cout<<"Mileage is = "<<res<<" miles/gallon "<<endl;
	return 0;
}
double mileage(double mi,double l)
{
	double g=li*l;
	return (mi/g);
}
