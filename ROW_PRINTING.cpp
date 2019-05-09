#include<iostream>
using namespace std;
void recursion(int);
int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	recursion(n);
}
void recursion(int x)
{
	if(x>=1)
	{
		cout<<"* ";
		recursion(--x);
	}
}
