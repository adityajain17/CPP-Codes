#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int q;
    cout<<"Enter the value of q : "<<endl;
    cin>>q;
    char s[q][10000];
    for(int i=0;i<q;i++)
    {
        cin>>s[i];
    }
    cout<<"The string enetered by you are : "<<endl;
    for(int i=0;i<q;i++)
    {
    	cout<<s[i]<<endl;
	}
    for(int i=0;i<q;i++)
    {
        int x=strlen(s[i]);
        char ch[5];char ch1[2];
        cout<<"Length : "<<x<<endl;
        for(int j=0;j<=4;j++)
        {
        	ch[j]=s[i][j];
            cout<<ch[j]<<" ";
		}
            cout<<endl;
        ch1[0]=s[i][x-2];
        ch1[1]=s[i][x-1];
        cout<<ch1[0]<<" "<<ch1[1]<<endl;
        cout<<endl;
        if((strcmp(ch,"hydro")==0)&&(strcmp(ch1,"ic")==0))
        {
                cout<<"non-metal acid "<<endl;
        }
        else if(strcmp(ch1,"ic")==0)
        {
            cout<<"polyatomic acid"<<endl;
        }
        else
        {
            cout<<"not an acid"<<endl;
        }
    }
}
