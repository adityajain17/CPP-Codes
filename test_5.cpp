#include<iostream>
using namespace std;
int main()
{
	int *ptr=new int;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	int a=25;
	ptr=&a;
	cout<<*ptr<<endl;
	*ptr=36;
	cout<<a<<endl;
}
