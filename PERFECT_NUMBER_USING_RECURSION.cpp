#include<iostream>
using namespace std;
int per(int,int);
int main()
{
	int n;
	cout<<"Enter the number of n "<<endl;
	cin>>n;
	per(n,0);
}
int per(int num,int sum)
{
	static int i=1,temp=num;
	if(i<num)
	{
		if(num%i==0)
		{
			sum=sum+i;
			//cout<<sum;
			i++;
			per(num,sum);
		}
		i++;
		per(num,sum);
	}
	else
	{
		if(temp==sum)
		{
		cout<<"PERFECT NUMBER "<<endl;
		exit(0);
		}
		else
		{
		cout<<"NOT A PERFECT NUMBER "<<endl;
		exit(0);
		}
	}
}
