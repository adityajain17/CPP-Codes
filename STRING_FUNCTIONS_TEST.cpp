#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int v1=5,v2=15;
	int *p1=&v1,*p2=&v2;
	cout<<p1<<" "<<p2<<endl;;
	*p1=10;
	*p2=*p1;
	p1=p2;
	cout<<p1<<" "<<p2<<endl;
	*p1=20;
	cout<<*p1<<" "<<*p2;
}
