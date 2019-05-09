#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str1[100],str2[100],str3[200];int i=0,k=0;
	cout<<"Enter the string 1 : "<<endl;
	gets(str1);
	cout<<"Enter the string 2 : "<<endl;
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		str3[k]=str1[i];
		k++;
	}
	str3[k]=' ';
	k++;
	for(i=0;str2[i]!='\0';i++)
	{
		str3[k]=str2[i];
		k++;
	}
	cout<<"Concatenated string is : ";
	puts(str3);
	return 0;
}
