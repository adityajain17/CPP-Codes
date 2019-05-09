#include<iostream>
using namespace std;
int arm(int,int);
int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	arm(n,0);
}
int arm(int num,int s)
{
	static int temp=num;
	if(num>0)
	{
		int d=num%10;
		s=s+d*d*d;
		arm(num/10,s);
	}
	else
	{
		if(temp==s)
		{
			cout<<"ARMSTRONG NUMBER "<<endl;
			exit(0);
		}
		else
		{
			cout<<"NOT A ARMSTRONG NUMBER "<<endl;
			exit(0);
		}
	}
}
