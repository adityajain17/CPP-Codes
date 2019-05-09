#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch;int i=0,k=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the character whose occurence  you want to check "<<endl;
	cin>>ch;
	for(i=0;str[i]!='\0';i++);
	for(int j=0;j<i;j++)
	{
		if(ch==str[j])
		{
			cout<<"THE "<<k+1<<" OCCURENCE IS AT "<<j+1<<endl;
			k++;
		}
	}
	return 0;
}
