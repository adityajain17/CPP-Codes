#include<iostream>
using namespace std;
int main()
{
	int i,j,n,s=0;int t,pos,lb,ub,mid,se,flag=0;
	cout<<"Enter the number of elemnts you want to enter "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elemnts of the array "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		s=arr[i];pos=i;
		for(j=i;j<n;j++)
		{
			if(s>arr[j])
			{
				pos=j;
				s=arr[j];
			}
		}
		t=arr[i];
		arr[pos]=t;
		arr[i]=s;
	}
	cout<<"Enter the element to be searched "<<endl;
	cin>>se;
	lb=0;ub=n-1;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(arr[mid]==se)
		{
			cout<<"Element found at "<<mid+1<<endl;
			flag=1;
			break;
		}
		else if(arr[mid]>se)
		{
			ub=mid-1;
		}
		else
		{
			lb=mid+1;
		}
	}
	if(flag==0)
	cout<<"Elemnt not found "<<endl;
	return 0;
}
