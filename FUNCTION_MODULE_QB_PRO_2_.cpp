#include<iostream>
using namespace std;
int sum(int,int,int);
int main()
{
	int a,b,c;
	cout<<"Enter the three numbers "<<endl;
	cin>>a>>b>>c;
	int res=sum(a,b,c);
	cout<<"Result is = "<<res;
}
int sum(int x,int y,int z)
{
	return(x+y+z);
}
