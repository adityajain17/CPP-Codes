#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[100],ch[20],ch1[20];int i,j,k=0,pos[20];char strn[100];int c=0;int c1=0;int flag=0;int t1=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the sub-string you want to replace "<<endl;
	gets(ch);
	cout<<"Enter the sub-string with which you want to replace "<<endl;
	gets(ch1);
	char t[strlen(ch)];
	for(i=0;i<=(strlen(str)-strlen(ch));i++)
	{
		k=0;
		for(j=i;j<=i+strlen(ch)-1;j++)
		{
			t[k]=str[j];
			k++;
		}
		if(strcmp(t,ch)==0)
		{
			flag=1;
			pos[c]=i;
			c++;
		}
	}
	if(flag==1)
	{
	c1=0;t1=0;
	for(j=0;j<strlen(str);)
	{
		if(pos[t1]!=j)
		{
			strn[c1]=str[j];
			c1++;
			j++;
		}
		if(pos[t1]==j)
		{
			for(i=0;i<strlen(ch1);i++)
			{
				strn[c1]=ch1[i];
				c1++;
			}
			j=j+strlen(ch);
			t1++;
		}
	}
	strn[c1]='\0';
	c1++;
	puts(strn);
	}
	else
	{
		cout<<"SUB-STRING NOT FOUND ";
	}
}
