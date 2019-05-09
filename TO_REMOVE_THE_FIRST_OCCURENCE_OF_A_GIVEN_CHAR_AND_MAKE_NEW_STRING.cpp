#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch;int i=0;char strn[100];int k=0,flag=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the character whose first occurence you want to delete "<<endl;
	cin>>ch;
	for(i=0;str[i]!='\0';i++);
	for(int j=0;j<i;j++)
	{
		if(ch==str[j]&&flag==0)
		{
			flag=1;
			continue;
		}
		else
		{
			strn[k]=str[j];
			k++;
		}
	}
	cout<<"THE NEW STRING AFTER REMOVING THE FIRST OCCURENCE OF THE GIVEN CHARACTER is : "<<endl;
	puts(strn);
	return 0;
}
