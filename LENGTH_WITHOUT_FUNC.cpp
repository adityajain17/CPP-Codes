#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];int c=0;
	cout<<"Enter the string : "<<endl;
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		c++;
	}
	cout<<"The length of the string is equal to "<<c<<endl;
	return 0;
}
