#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str1[100],str2[100];int i=0,l1=0,l2=0,a1,a2;
	cout<<"Enter the string 1 : "<<endl;
	gets(str1);
	cout<<"Enter the string 2 : "<<endl;
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		l2++;
	}
	if(l1<l2)
	{
		for(i=0;i<l1;i++)
		{
			a1=(int)(str1[i]);
			a2=(int)(str2[i]);
			if(a1<a2)
			{
				cout<<"Negative"<<endl;
				break;
			}
			if(a1>a2)
			{
				cout<<"Positive"<<endl;
				break;
			}
			if(a1==a2&&i==l1-1)
			{
				cout<<"Zero"<<endl;
				break;
			}
		}
	}
	else
	{
		for(i=0;i<l2;i++)
		{
			a1=(int)(str1[i]);
			a2=(int)(str2[i]);
			if(a1<a2)
			{
				cout<<"Negative"<<endl;
				break;
			}
			if(a1>a2)
			{
				cout<<"Positive"<<endl;
				break;
			}
			if(a1==a2&&i==l2-1)
			{
				cout<<"Zero"<<endl;
				break;
			}
		}
	}
	return 0;
}
