#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str1[100];int c=0,i=0;
	cout<<"Enter the string : "<<endl;
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		c++;
	}
	char str2[c];
	for(i=0;i<c;i++)
	{
		str2[i]=str1[i];
	}
	cout<<"The copied string is equal to ";
	puts(str2);
	return 0;
}
