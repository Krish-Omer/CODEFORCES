#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,n,i;
    string s1;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int cnt=0;
        cin>>n;
        cin>>s1;
        for(i=0;i<n-1;i++)
        {
            if(s1[i]!=s1[i+1])
                cnt++;
        }
        if(s1[0]=='0')
            cout<<cnt<<endl;
        else 
            cout<<cnt+1<<endl;
    }
}