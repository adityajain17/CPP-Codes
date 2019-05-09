#include<iostream>
#include<math.h>
using namespace std;
void printCombination(int [],int,int);
void combinationUtil(int[],int[],int,int,int,int);
int c=0;
int main()
{
	int t,n;
	cout<<"Enter the number of test cases : "<<endl;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"Enter the value of n : "<<endl;
		cin>>n;
		int a[n];
		cout<<"Enter the value of array "<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=n;j++)
		{
			printCombination(a,n,j);
		}
		cout<<c<<endl;
		c=0;
	}
}
void printCombination(int arr[], int n, int r) 
{ 
    int data[r]; 
    combinationUtil(arr, data, 0, n-1, 0, r); 
} 
void combinationUtil(int arr[], int data[], int start, int end, 
                     int index, int r) 
{ 
    if (index == r) 
    { 
    	int sum=0;
        for (int j=0; j<r; j++) 
        {
        	cout<<data[j];
        	sum=sum+data[j];
		}
		cout<<endl;
		if(sum>=1&&sum<=2*(end+1))
		c++;
        return; 
    } 
    for (int i=start; i<=end && end-i+1 >= r-index; i++) 
    { 
        data[index] = arr[i]; 
        combinationUtil(arr, data, i+1, end, index+1, r); 
    } 
} 
