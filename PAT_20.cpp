/* WAP TO DISPLAY 
   *****     *****
  *******   *******
 ********* *********
 *******************
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,c=5;
	for(i=5;i<=9;i=i+2)
	{
		for(j=9;j>=i;j=j-2)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(j=1;j<=c;j++)
		{
			cout<<" ";
		}
		c=c-2;
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=19;i>=1;i=i-2)
	{
		for(j=19;j>=i;j=j-2)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
