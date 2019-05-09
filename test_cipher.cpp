#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char ch[100];int n;int k;
    cin>>n;
    cin>>ch;
    cin>>k;
    for(int i=0;i<strlen(ch);i++)
    {
        int x=ch[i];
        
        if(x>=65&&x<=90)
        {
            x=x+k%26;
            ch[i]=x;
            
        }
        else if(x>=97&&x<=122)
        {
            x=x+k%26;
            ch[i]=x;
        }
        else
        {
            
        }
     }
    puts(ch);
}
