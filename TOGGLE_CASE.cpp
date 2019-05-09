//This program is to convert the character entered by the user ffrom upper case to lower case and vice-versa
#include<iostream>
using namespace std;
int main()
{
	char ch,temp;
	cout<<"Enter the character"<<endl;//Taking the character from the user
	cin>>ch;
	int x=(int)ch;
	if(x>=48&&x<=57)//To check whether it is a digit or not
	{
	cout<<"IT IS A DIGIT NOT A CHARACTER "<<endl;
    }
    else
    {
	  if(x>=65&&x<=90)//if in upper case convert to lower case
	   {
		cout<<"Input character UPPER CASE "<<ch<<endl;
		temp=(char)(x+32);//explicitly converting into lower case
		cout<<"Output character LOWER CASE "<<temp<<endl;
	   }
	  if(x>=97&&x<=122)//if in lower case convert to upper case
	  {
		cout<<"Input character LOWER CASE "<<ch<<endl;
		temp=(char)(x-32);//explicilty converting to upper case
		cout<<"Output character UPPER CASE "<<temp<<endl;
	  }
	}
return 0;
}
