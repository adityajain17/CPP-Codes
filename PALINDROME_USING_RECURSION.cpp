#include<iostream>
using namespace std;
int is_palin(int,int);
int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	if(is_palin(n,0))
	{
		cout<<"PALINDROME NUMBER "<<endl;
	}
	else
	{
		cout<<"NOT A PALINDROME NUMBER "<<endl;
	}
}
int is_palin(int num,int r)
{
	int d=0;static int temp=num;
	if(num>0)
	{
		d=num%10;
		r=r*10+d;
		is_palin(num/10,r);
	}
	else
	{
		if(r==temp)
		return 1;
		else
		return 0;
	}
}
