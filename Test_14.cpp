#include<iostream>
using namespace std;
int main()
{
	float a=5;
//	cout<<a<<endl;
//	cout<<&a<<endl;
	cout<<"Hi "<<sizeof(a)<<endl;
	float *ptr=new float;
	ptr=&a;
//	cout<<*ptr<<endl;
//	cout<<ptr<<endl;
//	cout<<&ptr<<endl;
	cout<<"Hello "<<sizeof(ptr)<<endl;
	float *ptr1=&a;
	cout<<*ptr1<<endl;
	cout<<"Aditya "<<sizeof(ptr1)<<endl;
}
