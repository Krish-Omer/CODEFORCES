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
        ll n,k,i,ans=0;
        cin>>n>>k;
        vector<pair<ll,ll>> v1(n);
        vector<ll> v2;
        for(i=0;i<n;i++)
            cin>>v1[i].first;
        for(i=0;i<n;i++)
        {
            cin>>v1[i].second;
            if(v1[i].first>v1[i].second)
            {
                ans+=v1[i].first;
                v2.push_back(v1[i].second);
            }
            else 
            {
                ans+=v1[i].second;
                v2.push_back(v1[i].first); 
            }
        }
        sort(v2.begin(),v2.end(),greater<ll>());
        for(i=0;i<k-1;i++)
            ans+=v2[i];
        cout<<ans+1<<endl;
    }
}