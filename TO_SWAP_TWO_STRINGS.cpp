#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str1[100],str2[100],t[100];
	cout<<"Enter string 1 : "<<endl;
	gets(str1);
	cout<<"Enter string 2 : "<<endl;
	gets(str2);
	strcpy(t,str1);
	strcpy(str1,str2);
	strcpy(str2,t);
	cout<<"The string 1 : after swapping ";
	puts(str1);
	cout<<endl;
	cout<<"The string 2 : after swapping ";
	puts(str2);
	cout<<endl;
	return 0;
}
