#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100];int k=0,i,j,l1,l2;
	cout<<"Enter the string "<<endl;
	gets(str);
	cout<<"Enter the postion from where you want "<<endl;
	cin>>l1;
	cout<<"Enter the position till where you want "<<endl;
	cin>>l2;
	for(i=l1;i<=l2;i++);
	char sub[i];
	for(j=l1-1;j<=l2-1;j++)
	{
		sub[k]=str[j];
		k++;
	}
	cout<<"The substring you wanted is : "<<endl;
	puts(sub);
	return 0;
}
