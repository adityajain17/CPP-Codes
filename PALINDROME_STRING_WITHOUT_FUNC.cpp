#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str1[100],str2[100];int i=0,j;int v=0;char ch;
	cout<<"Enter the string : "<<endl;
	gets(str1);
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str1[j]!='\0';j++)
	{
		str2[i-1]=str1[j];
		i--;
	}
	if(strcmp(str1,str2)==0)
	cout<<"PALINDROME "<<endl;
	else
	cout<<"NOT A PALINDROME STRING "<<endl;
	return 0;
}
