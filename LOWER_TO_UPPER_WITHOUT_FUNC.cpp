#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str1[100];int i=0;int t;
	cout<<"Enter the string 1 which you want to convert to upper case : "<<endl;
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>='a'&&str1[i]<='z')
		{
			t=(int)(str1[i]);
			str1[i]=(char)(t-32);
		}
	}
	cout<<"The string in upper case is : ";
	puts(str1);
	return 0;
}
