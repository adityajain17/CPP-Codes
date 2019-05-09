#include<iostream>
using namespace std;
int main()
{
	int m;char res;
	cout<<"Enter the marks "<<endl;
	cin>>m;
	if(m<25)
	res='F';
	else if(m>=25&&m<45)
	res='E';
	else if(m>=45&&m<50)
	res='D';
	else if(m>=50&&m<60)
	res='C';
	else if(m>=60&&m<80)
	res='B';
	else
	res='A';
	cout<<"Result is = "<<res;
	return 0;
}
