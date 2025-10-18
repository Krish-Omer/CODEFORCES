#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,i,q,ans=0;
    cin>>n>>q;
    vector<ll> v1(n, 0),v2(n),diff(n+1,0);
    vector<pair<ll,ll>> q1(q);
    for(i=0;i<n;i++)
        cin>>v2[i];
    for(i=0;i<q;i++)
        cin>>q1[i].first>>q1[i].second;
    for(auto [l,r]:q1) 
    {
        diff[l-1]+=1;
         if(r<n)
            diff[r]-=1;
    }
    v1[0]=diff[0];
    for(i=1;i<n;i++)
        v1[i]=v1[i-1]+diff[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++)
        ans+=v2[i]*v1[i];
    cout<<ans<<endl;
}