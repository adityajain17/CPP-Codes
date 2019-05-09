#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch,ch1;int i=0,pos;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the character whose last occurence  you want to check "<<endl;
	cin>>ch;
	cout<<"Enter the character with which you want to change "<<endl;
	cin>>ch1;
	for(i=0;str[i]!='\0';i++);
	for(int j=0;j<i;j++)
	{
		if(ch==str[j])
		{
			pos=j;
		}
	}
	str[pos]=ch1;
	cout<<"THE NEW STRING AFTER REPLACING THE FIRST OCCURENCE OF THE CHARACTER IS : "<<endl;
	puts(str);
	return 0;
}
