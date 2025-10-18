#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,a[9],i,maxi=0,p,maxint;
    string s1="",s2;
    cin>>v;
    for(i=0;i<9;i++)
        cin>>a[i];
    for(i=0;i<9;i++)
    {
        p=v/a[i];
        if(p>=maxi)
        {
            maxi=p;
            maxint=i+1;
        }
    }
    if(maxi==0)
        cout<<-1;
    else 
    {
        s2=to_string(maxint);
        for(i=0;i<maxi;i++)
            s1=s1+s2;
        cout<<s1;
    }
}