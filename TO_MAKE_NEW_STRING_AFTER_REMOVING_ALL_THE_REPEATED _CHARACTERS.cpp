#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch[100];int i=0,c=0,k=0,j=0,flag=0,t[100]={0};char str1[100];
	cout<<"Enter the string "<<endl;
	gets(str);
	for(i=0;str[i]!='\0';i++);
	for(j=0;j<i;j++)
	{
		flag=0;
		for(k=0;k<c;k++)
		{
			if(str[j]==ch[k])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			ch[c]=str[j];
			t[c]=0;
			c++;
			for(k=0;k<i;k++)
			{
				if(str[j]==str[k])
				t[c]++;
			}
		}
	}
	k=0;
	for(j=0;j<c;j++)
	{
		if(t[c]==1)
		{
			str1[k]=ch[j];
			k++;
		}
	}
	cout<<"THE NEW STRING IS : "<<endl;
	puts(str1);
	return 0;
}
