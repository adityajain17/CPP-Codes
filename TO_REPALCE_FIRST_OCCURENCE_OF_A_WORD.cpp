#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];int i=0,l1,l2;char ch[100];int j,k;int flag=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the string which you want to check "<<endl;
	gets(ch);
	l1=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			l2=i;k=0;
			for(j=l1;j<l2;j++)
			{
				k++;
			}
			char t[k];
			t[0]=str[l1];
			k=1;
			for(j=l1+1;j<l2;j++)
			{
				t[k]=str[j];
				k++;
			}
			if(strcmp(t,ch)==0)
			{
				cout<<"THE STRING IS FOUND BETWEEN "<<l1+1<<" and "<<l2;
				flag=1;
				break;
			}
			else
			{
				l1=l2+1;
			}
			for(j=0;j<k;j++)
			{
				t[j]='\0';			
			}
		}
	}
	if(flag==0)
	cout<<"WORD NOT FOUND "<<endl;
	return 0;
}
