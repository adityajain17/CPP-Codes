#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
	char str[100];int i=0;int b=0;
	cout<<"Enter the string : "<<endl;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		b++;
	}
	cout<<"The number of words is : "<<b+1<<endl;
	return 0;
}
