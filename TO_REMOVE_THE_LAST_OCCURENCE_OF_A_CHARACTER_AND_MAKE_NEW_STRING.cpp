#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch;int i=0,j=0;char strn[100];int k=0,pos=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the character whose last occurence you want to delete "<<endl;
	cin>>ch;
	for(i=0;str[i]!='\0';i++);
	for(j=0;j<i;j++)
	{
		if(ch==str[j])
		{
			pos=j;
		}
	}
	for(j=0;j<i;j++)
	{
		if(j==pos)
		{
			continue;
		}
		else
		{
			strn[k]=str[j];
			k++;
		}
	}
	cout<<"THE NEW STRING AFTER REMOVING THE LAST OCCURENCE OF THE GIVEN CHARACTER is : "<<endl;
	puts(strn);
	return 0;
}
