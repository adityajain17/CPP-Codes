#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
	char str[100];int i=0;int v=0;char ch;
	cout<<"Enter the string : "<<endl;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		ch=toupper(str[i]);
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		v++;
	}
	cout<<"The number of vowels is : "<<v<<endl;
	return 0;
}
