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
        ll i,n,ans=1;
        cin>>n;
        vector<ll> v1(n),v2;
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<n-1;i++)
        {
            if(v1[i+1]%v1[i]!=0)
                v2.push_back(v1[i]/(__gcd(v1[i],v1[i+1])));
        }
        for(i=0;i<v2.size();i++)
            ans=lcm(ans,v2[i]);
        cout<<ans<<endl;
    }
}