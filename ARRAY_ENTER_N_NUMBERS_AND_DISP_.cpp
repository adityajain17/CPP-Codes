#include<iostream>
using namespace std;
int main()
{
	int i=0,n;
	cout<<"Enter the number of elements you want to enter "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The elements are : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
