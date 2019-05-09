#include<iostream>
using namespace std;
int main()
{
	int n,pro=1;
	cout<<"Enter number "<<endl;
	cin>>n;
	for(int i=n;i>1;i--)
	{
		pro=pro*i;
	}
	cout<<"FACTORIAL IS = "<<pro<<endl;
	return 0;
}
