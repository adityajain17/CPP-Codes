#include<iostream>
using namespace std;
int pattern(int);
int pattern1(int);
int k=1;
int main()
{
	pattern(5);
}
int pattern(int i)
{
	static int r=1;
	if(r<=i)
	{
		pattern1(r);
		cout<<endl;
		r++;k=1;
		pattern(5);
	}
}
int pattern1(int j)
{
	if(k<=j)
	{
		cout<<k<<" ";
		k++;
		pattern1(j);
	}
}
