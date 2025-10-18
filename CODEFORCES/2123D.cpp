#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,c1=0,c0=0;
        string s1;
        cin>>n>>k;
        cin>>s1;
        for(i=0;i<n;i++)
        {
            if(s1[i]=='0')
                c0++;
            else 
                c1++;
        }
        if(k>=c1||k>(n/2))
            cout<<"Alice"<<endl;
        else 
            cout<<"Bob"<<endl;
    }
}