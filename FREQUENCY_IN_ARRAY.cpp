#include<iostream>
using namespace std;
int main()
{
	int i,j,n;int f[10]={0};int flag=0,c,t,k=0;
	cout<<"Enter the number of elements you want to enter "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		t=arr[i];flag=0;c=0;
		for(j=0;j<k;j++)
		{
			if(t==f[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			f[k]=t;
			k++;
			for(j=0;j<n;j++)
			{
				if(t==arr[j])
				{
					cout<<arr[j]<<" POSITION "<<j+1<<endl;
					c++;
				}
			}
			cout<<"Element "<<arr[i]<<" found "<<c<<" times "<<endl;
			cout<<endl;
		}
	}
	return 0;
}
