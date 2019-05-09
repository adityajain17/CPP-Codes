#include<iostream>
#include<math.h>
using namespace std;
double interest(double ,double,int);
int main()
{
	double p,r;int m;int ctr=1;
	while(ctr)
	{
	cout<<"Enter the credit balance "<<endl;
	cin>>p;
	cout<<"Enter the monthly interest rate "<<endl;
	cin>>r;
	cout<<"Enter the number of months "<<endl;
	cin>>m;
	cout<<"Interest due = "<<interest(p,r,m)<<endl;
	cout<<"Do you wish to continue (N/Y) (0/1) "<<endl;
	cin>>ctr;
	}
	return 0; 
}
double interest(double pr,double ra,int x)
{
	double res=pr*pow((1+ra/100.0),x);
	return res-pr;
}
