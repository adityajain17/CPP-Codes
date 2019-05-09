#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch[20];int i,j,pos;char strn[100];int k=0,l;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the string you want to enter "<<endl;
	gets(ch);
	cout<<"Enter the postion where you want to enter "<<endl;
	cin>>pos;
	for(i=0;str[i]!='\0';i++);
	for(l=0;ch[l]!='\0';l++);
	for(j=0;j<=pos-1;j++)
	{
		strn[k]=str[j];
		k++;
	}
	for(j=0;j<l;j++)
	{
		strn[k]=ch[j];
		k++;
	}
	strn[k]=' ';
	k++;
	for(j=pos;j<i;j++)
	{
		strn[k]=str[j];
		k++;
	}
	cout<<"The new string is : "<<endl;
	puts(strn);
	return 0;
}
