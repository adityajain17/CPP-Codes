#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;double x1,x2;
	cout<<"Enter the values of a,b,c"<<endl;
	cin>>a>>b>>c;
	cout<<endl;
	double d=b*b-4*a*c;
	if(d>0)
	{
		x1=(-b+pow(d,0.5))/(2*a);
		x2=(-b-pow(d,0.5))/(2*a);
		cout<<"Root 1 ="<<x1<<endl;
		cout<<"Root 2 ="<<x2<<endl;
	}
	if(d==0)
	{
		x1=-b/(2*a);
		x2=x1;
		cout<<"Root 1 ="<<x1<<endl;
		cout<<"Root 2 ="<<x2<<endl;
	}
	if(d<0)
	 {
	 	cout<<"The roots are imaginary"<<endl;
	 }
	
}
