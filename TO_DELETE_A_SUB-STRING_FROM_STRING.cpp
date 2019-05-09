#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[100],ch[20];int i,j,k=0,pos[20];char strn[100];int c=0;int c1=0;int flag=0;int t1=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the sub-string you want to delete "<<endl;
	gets(ch);
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
	for(i=j;i<pos[t1];i++)
	{
		strn[c1]=str[i];
		c1++;
	}
	strn[c1]='\0';
	if(t1<=c-1)
	{
	for(i=pos[t1]+strlen(ch);i<pos[t1+1];i++)
	{
		strn[c1]=str[i];
		c1++;
	}
	strn[c1]='\0';
	t1++;
	j=i;
	}
	else
	{
		for(i=j;i<strlen(str);i++)
		{
			strn[c1]=str[i];
			c1++;
		}
		strn[c1]='\0';
		j=i;
	}
	}
	cout<<"THE NEW STRING IS : "<<endl;
	puts(strn);
	}
	else
	{
		cout<<"SUB-String not found "<<endl;
	}
	return 0;
}

