#include<iostream>
using namespace std;
int main()
{
	int i=0,n;int max=0;
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
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"The maximum is = "<<max<<endl;
	return 0;
}
