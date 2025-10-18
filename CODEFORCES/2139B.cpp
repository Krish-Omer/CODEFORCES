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
        ll i,n,m,sum=0,k;
        cin>>n>>m;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end(),greater<ll>());
        k=min(n,m);
        for(i=0;i<k;i++)
            sum+=(m-i)*v1[i];
        cout<<sum<<endl;
    }
}