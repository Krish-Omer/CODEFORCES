#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t,k,i,n;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        string s1="";
        if(n%6==1)
        {
            for(i=0;i<n-1;i++)
                s1=s1+"5";
            s1=s1+"4";
        }
        else 
        {
            for(i=0;i<n-1;i++)
                s1=s1+"5";
            s1=s1+"7";
        }
        cout<<s1<<endl;
    }
}