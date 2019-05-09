#include<iostream>
using namespace std;
int main()
{
	char ch='1';
	char a[10]={ch};
	for(int i=0;i<10;i++)
	{
		cout<<i<<" "<<a[i]<<endl;
	}
	return 0;
}
