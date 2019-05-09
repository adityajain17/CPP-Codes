/* WAP to display
    A
    A B
    A B C
    A B C D */
#include<iostream>
using namespace std;
int main()
{
	for(char i='A';i<='D';i++)
	{
		for(char j='A';j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
