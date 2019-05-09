#include<iostream>
using namespace std;
double inflation(double ,double);
int main()
{
	double ol,ne;int ctr=1;
	while(ctr)
	{
	cout<<"Enter the old rate "<<endl;
	cin>>ol;
	cout<<"Enter the new rate "<<endl;
	cin>>ne;
	cout<<"Inflation rate = "<<inflation(ol,ne)<<" % "<<endl;
	cout<<"DO YOU WANT TO CONTINUE N/Y(0/1) "<<endl;
	cin>>ctr;
	}
	return 0;
}
double inflation(double old,double ne )
{
	double res=(ne-old)/old;
	return res;
}
