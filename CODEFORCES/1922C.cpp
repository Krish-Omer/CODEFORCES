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
        ll i,n,m,t1,t2;
        cin>>n;
        vector<pair<ll,char>> v1(n);
        vector<ll> f(n),r(n);
        for(i=0;i<n;i++)
            cin>>v1[i].first;
        v1[0].second='A';v1[n-1].second='P';
        for(i=1;i<n-1;i++)
        {
            if(v1[i].first-v1[i-1].first>v1[i+1].first-v1[i].first)
                v1[i].second='A';
            else 
                v1[i].second='P';
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
                f[0]=0;
            else if(v1[i-1].second=='A')
                f[i]=f[i-1]+1;
            else 
                f[i]=f[i-1]+v1[i].first-v1[i-1].first;
        }
        for(i=n-1;i>-1;i--)
        {
            if(i==n-1)
                r[n-1]=0;
            else if(v1[i+1].second=='P')
                r[i]=r[i+1]+1;
            else 
                r[i]=r[i+1]+v1[i+1].first-v1[i].first;
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>t1>>t2;
            if(t1<t2)
                cout<<f[t2-1]-f[t1-1]<<endl;
            else 
                cout<<r[t2-1]-r[t1-1]<<endl;
        }
    }
}