#include<iostream>
using namespace std;
int main()
{
	int i=0,n,pos,ele;
	cout<<"Enter the number of elements you want to enter "<<endl;
	cin>>n;
	int arr[n+1];
	cout<<"Enter the array elements "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the position of where u want to enter "<<endl;
	cin>>pos;
	cout<<"Enter the element you want to enter "<<endl;
	cin>>ele;
	for(i=n-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=ele;
	cout<<"NEW ARRAY "<<endl;
	for(i=0;i<n+1;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
