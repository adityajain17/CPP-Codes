/*WAP TO DISPLAY
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;int c=5;
	for(i=1;i<=9;i=i+2)
	{
		for(j=1;j<c;j++)
		{
			cout<<"  ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		c=c-1;
		cout<<endl;
	}
	c=1;
	for(i=7;i>=1;i=i-2)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"  ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		c=c+1;
		cout<<endl;
	}
	return 0;
}
