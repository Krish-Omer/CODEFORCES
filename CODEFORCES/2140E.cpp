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
        ll n,k,i;
        bool flag=true;
        cin>>n>>k;
        vector<ll> v1(n+1),freq(n+1,0);
        for(i=1;i<=n;i++)
        {
            cin>>v1[i];
            freq[v1[i]]++;
        }
        for(i=1;i<=n;i++)
        {
            if(freq[i]%k!=0)
            {
                flag=false;
                break;
            }
        }
        if(!flag)
        {
            cout<<0<<endl;
            continue;
        }    
        vector<ll> v2(n+1,0);
        for(i=1;i<=n;i++)
            v2[i]=freq[i]/k;
        vector<ll> cur(n+1,0);
        ll ans=0,left=1;
        for(i=1;i<=n;i++) 
        {
            int v=v1[i];
            cur[v]++;
            while(cur[v]>v2[v] && left<=i) 
            {
                int u=v1[left];
                cur[u]--;
                left++;
            }
            ans+=(i-left+1LL);
        }
        cout<<ans<<endl;
    }
}