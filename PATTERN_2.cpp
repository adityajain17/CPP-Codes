/* WAP to display 
    1
    1 3
    1 3 5
    1 3 5 7
    1 3 5 7 9 */
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=9;i=i+2)
	{
		for(int j=1;j<=i;j=j+2)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
