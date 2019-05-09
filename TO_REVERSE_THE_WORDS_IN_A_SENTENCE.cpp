#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter the string "<<endl;
	gets(str);
	int i,c=0,k,c1;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		c++;
	}
	cout<<strlen(str)<<endl;
	char x[c-1][100]={""};c1=c-1;c=0;k=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			x[c][k]=str[i];
			k++;
		}
		else
		{
			c++;
			k=0;
		}
	}
	for(i=c1;i>=0;i--)
	{
		cout<<x[i]<<" ";
	}
	return 0;
}
