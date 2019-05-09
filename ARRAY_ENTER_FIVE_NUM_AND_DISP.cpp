#include<iostream>
using namespace std;
int main()
{
	int arr[5];int i=0;
	cout<<"Enter the array elements "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"The elements are : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
