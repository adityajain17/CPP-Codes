#include<iostream>
using namespace std;
int main()
{
	int i,n,ele,pos;
	cout<<"Enter the number of elements you want to enter "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to delete "<<endl;
	cin>>ele;
	cout<<"Enter the position of the element you want to delete "<<endl;
	cin>>pos;
	cout<<"THE array is "<<endl;
	for(i=pos-1;i<=n-2;i++)
	{
		arr[i]=arr[i+1];
	}
	cout<<"NEW ARRAY "<<endl;
	for(i=0;i<=n-2;i++)
	{
		cout<<arr[i]<<endl;
	} 
	return 0;
}
