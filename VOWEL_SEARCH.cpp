#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the alphabet "<<endl;
	cin>>ch;
	int x=(int)ch;
	if(x>=97&&x<=122)
	{
		ch=(char)(x-32);
	}
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout<<"VOWEL "<<endl;
			break;
		default :
			cout<<"CONSONANT "<<endl;
	}
}
