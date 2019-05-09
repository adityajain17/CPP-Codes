#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	for(int i=(int)(min(a,b));i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		{
			cout<<i<<endl;
			break;
		}
	}
}
