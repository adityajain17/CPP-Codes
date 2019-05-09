// WAP to print all the ascii characters with their ascii value using for-loop 
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=256;i++)
	{
		char ch=(char)i;
		cout<<" ASCII VALUE "<<i<<" "<<"SYMBOL "<<ch<<endl;
	}
	return 0;
}
