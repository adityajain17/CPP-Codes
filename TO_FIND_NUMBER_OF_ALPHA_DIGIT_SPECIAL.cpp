#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];int i=0;int a=0,d=0,s=0;
	cout<<"Enter the string : "<<endl;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		a++;
		else if(str[i]>='0'&&str[i]<='9')
		d++;
		else
		s++;
	}
	cout<<"The number of alphabets is : "<<a<<endl;
	cout<<"The number of digits is : "<<d<<endl;
	cout<<"The number of special characters is : "<<s<<endl;
	return 0;
}
