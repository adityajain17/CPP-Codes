#include<iostream>
using namespace std;
bool in_order(int,int,int);
int main()
{
	int a,b,c;
	cout<<"Enter three numbers "<<endl;
	cin>>a>>b>>c;
	bool res=in_order(a,b,c);
	cout<<"Result is = "<<res;
	return 0;
}
bool in_order(int x,int y,int z)
{
	bool res;
	if((x<=y&&y<=z)||(x<=y&&y<z)||(x<y&&y<=z)||(x<y&&y<z))
	res=true;
	else
	res=false;
	return(res);
}
