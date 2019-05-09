#include<iostream>
#include<String.h>
using namespace std;
int main()
{
	char ch[10];
	cout<<"Username"<<endl;
	cin>>ch;
	char pa[10];
	cout<<"Password"<<endl;
	cin>>pa;
	cout<<"Entered Username "<<ch<<endl;
	cout<<"Password Entered "<<pa<<endl;
	if(strncmp(ch,"root",10)==0&&strncmp(pa,"pass",10)==0)
	{
		cout<<"Access Granted"<<endl;
	}
	else
	{
		cout<<"Access Denied"<<endl;
	}
}
