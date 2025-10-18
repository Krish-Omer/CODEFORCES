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
        ll n,i,k,totalbits,ans=0;
        cin>>n>>k;
        // 1-bit total-bit number
        vector<pair<pair<ll,ll>,ll>> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i].second;
            if(v1[i]==0)
                totalbits=0;
            else 
                totalbits=(ll)log2(n)+1;
            v1[i].first.second=totalbits;
            v1[i].first.first=__builtin_popcountll(v1[i]);
            ans+=v1[i].first.first;
        }
        if(k==0)
        {
            cout<<ans<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(v1[i]%2==1)
            {
                k--;
                v1[i].second++;
                v1[i].first.first++;
                ans++;
            }
            if(k==0)
                break;
        }
        if(k==0)
        {
            cout<<ans<<endl;
            continue;
        }
        sort(v1.begin(),v1.end());
        while(k>0)
        {
            for(i=0;i<n;i++)
            {

            }
        }
    }
}