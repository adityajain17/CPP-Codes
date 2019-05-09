#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch;int i=0,pos;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the character whose last occurence  you want to check "<<endl;
	cin>>ch;
	for(i=0;str[i]!='\0';i++);
	for(int j=0;j<i;j++)
	{
		if(ch==str[j])
		{
			pos=j;
		}
	}
	cout<<"THE LAST OCCURENCE POSITION IS "<<pos+1<<endl;
	return 0;
}
