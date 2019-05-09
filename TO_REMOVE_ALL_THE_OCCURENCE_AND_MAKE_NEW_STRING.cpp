#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch;int i=0;char strn[100];int pos[100];int k=0,j=0,flag=0;int l=0,c=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the character whose occurence you want to delete "<<endl;
	cin>>ch;
	for(i=0;str[i]!='\0';i++);
	for(j=0;j<i;j++)
	{
		if(ch==str[j])
		{
			pos[k]=j;
			k++;
		}
	}
	for(j=0;j<i;j++)
	{
		flag=0;
		for(l=0;l<k;l++)
		{
			if(j==pos[l])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			strn[c]=str[j];
			c++;
		}
	}
	cout<<"THE NEW STRING AFTER REMOVING ALL THE OCCURENCE OF THE GIVEN CHARACTER is : "<<endl;
	puts(strn);
	return 0;
}
