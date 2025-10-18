#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        bool flag=true;
        cin>>n;
        vector<ll> v1(n),v2(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<n;i++)
            cin>>v2[i];
        for(i=0;i<n-1;i++)
        {
            if(v1[i]!=v2[i])
            {
                if(v2[i]!=(v1[i]^v1[i+1]))
                    flag=false;
                else 
                    v1[i]=v1[i]^v1[i+1];
            }
        }
        if(flag && v1[n-1]==v2[n-1])
        {
            cout<<"YES"<<endl;
            continue;
        }
        flag=true;
        for(i=n-2;i>=0;i--)
        {
            if(v1[i]!=v2[i])
            {
                if(v2[i]!=(v1[i]^v1[i+1]))
                {
                    flag=false;
                    break;
                }
                else 
                    v1[i]=v1[i]^v1[i+1];
            }
        }
        if(flag && v1[n-1]==v2[n-1])
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}