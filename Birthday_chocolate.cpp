#include <bits/stdc++.h>
int fact(int);
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d,m;
    cin>>d>>m;
    int x=fact(n)/(fact(m)*fact(n-m));
    int c[n][m];int k=0,l=0;
    for(i=0;i<n;i++)
    {
        l=k;
        for(j=0;j<m;)
        {
            c[i][j++]=a[l];
            l=(l+1);
            if(l==n)
            break;
        }
        k++;
        if(l==n)
        break;
    }
    cout<<"All the combinations : "<<endl;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
    int s=0,co=0;
    for(i=0;i<n;i++)
    {
    	s=0;
    	for(j=0;j<m;j++)
    	{
    		s=s+c[i][j];
		}
		if(s==d)
		co++;
	}
	cout<<co;
}
int fact(int n)
{
	int p=1;
	for(int i=n;i>=1;i--)
	{
		p=p*i;
	}
	return p;
}

