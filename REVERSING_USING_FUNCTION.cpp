#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[100];int i=0;int v=0;char ch;
	cout<<"Enter the string : "<<endl;
	gets(str);
	cout<<"The reverse of the string is :  ";
	puts(strrev(str));
	return 0;
}
