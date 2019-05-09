#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char str[100];int i;char ch;
	cout<<"Enter the string : "<<endl;
	gets(str);
	fstream fin;
	fin.open("sample.txt",ios::out);
	for(i=0;str[i]!='\0';i++)
	{
		fin.put(str[i]);
	}
	fin.close(); 
	fin.open("sample.txt",ios::in);
	if(!fin)
	{
		cout<<"Error opening file "<<endl;
	}
	else
	{
		while(fin)
		{
			fin.get(ch);
			cout<<ch;
			ch='\0';
		}
	}
}
