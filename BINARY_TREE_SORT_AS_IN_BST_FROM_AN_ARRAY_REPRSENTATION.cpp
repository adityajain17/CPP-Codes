//This program is to efficiently print the inorder traversal of a bst with the concept of array representation of BST
#include<iostream>
using namespace std;
void sort_as_in_bst(int[],int,int);
int main()
{
	int size;
	cout<<"Enter size : "<<endl;
	cin>>size;
	int arr[size];
	int i=0;
	cout<<"Enter data : "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	sort_as_in_bst(arr,0,size-1);
}
void sort_as_in_bst(int ar[],int start,int end)
{
	if(start>end)
	{
		return;
	}
	sort_as_in_bst(ar,2*start+1,end);
	cout<<ar[start]<<" ";
	sort_as_in_bst(ar,2*start+2,end);
}
