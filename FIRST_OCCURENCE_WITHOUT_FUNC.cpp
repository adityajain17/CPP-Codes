#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];char ch;int i=0;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the character whose first occurence  you want to check "<<endl;
	cin>>ch;
	for(i=0;str[i]!='\0';i++);
	for(int j=0;j<i;j++)
	{
		if(ch==str[j])
		{
			cout<<"THE FIRST OCCURENCE OF THE ABOVE CHARACTER is "<<j+1<<endl;
			break;
		}
	}
	return 0;
}
