/* Write a program that converts from 24-hour notation to 12-hour notation. For example, it should convert 14:25 to 2:25 PM. The input is given as two integers. 
There should be at least three functions, one for input, one to do the conversion, and one for output. Record the AM/PM information as a value of type char, ‘A’ for AM and ‘P’ for PM. 
Thus, the function for doing the conversions will have a call-by-reference formal parameter of type char to record whether it is AM or PM. (The function will have other parameters as well.) 
Include a loop that lets the user repeat this computation for new input values again and again until the user says he or she wants to end the program. */
#include<iostream>
using namespace std;
void input(int &,int &);
void conversion(int &,int &,char &);
void output(int,int,char);
int main()
{
	int hr,mi;char sec;hr=0,mi=0;
	input(hr,mi);
	conversion(hr,mi,sec);
	output(hr,mi,sec);	
}
void input(int &hr,int &min)
{
	cout<<"Enter hour : "<<endl;
	cin>>hr;
	cout<<"Enter minutes : "<<endl;
	cin>>min;
}
void conversion(int &hr,int &mi,char &se)
{
	if(hr>12)
	{
		hr=hr-12;
		se='P';
	}
	else
	{
		se='A';
	}
}
void output(int hr,int min,char se)
{
	cout<<hr<<":"<<min<<" "<<se;
}
