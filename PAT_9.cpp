/* WAp to display 
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
*/
#include<iostream>
using  namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=5;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
