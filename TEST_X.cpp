#include<iostream>
using namespace std;
int main()
{
	int arr[20];int n=2520;int i;bool done=false;
	for(i=1;i<=20;i++)
	{
		arr[i-1]=i;
	}
	while(true)
	{
		for(int index=0;index<20;index++)
		{
			if(n%arr[index]!=0)
			{
				done=false;
				break;
			}
			else
			{
				done=true;
			}
		}
		if(done==true)
		{
			cout<<n<<endl;
		}
		n++;
	}
	cout<<n<<endl;
}
