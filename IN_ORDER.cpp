#include<iostream>
using namespace std;
int in_order(int ,int,int);
int main()
{
	int a,b,c;
	cout<<"Enter the three numbers "<<endl;
	cin>>a>>b>>c;
	int res=in_order(a,b,c);
	if(res)
	{
		cout<<"In order "<<endl;
	}
	else
	{
		cout<<"Not in order "<<endl;
	}
}
int in_order(int x,int y,int z)
{
	if(x<=y&&y<=z)
	return 1;
	else
	return 0;
}
