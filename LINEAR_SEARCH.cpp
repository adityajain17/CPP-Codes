#include<iostream>
using namespace std;
int main()
{
	int i=0,n,se,flag=0;
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
	cout<<endl;
	cout<<"Enter the element to be searched "<<endl;
	cin>>se;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
			cout<<"Element found at "<<i+1;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"Element not found "<<endl;
	return 0;
}
