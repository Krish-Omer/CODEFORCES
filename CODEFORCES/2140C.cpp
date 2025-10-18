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
        ll i,n,m,ans;
        cin>>n>>m;
        ans=m;
        vector<ll> a(n+1),b(n+1);
        a[0]=0;b[0]=0;
        for(i=1;i<=n;i++)
            cin>>a[i]>>b[i];
        for(i=1;i<=n;i++)
        {
            if((a[i]-a[i-1])%2!=(b[i-1]!=b[i]) ? 1:0)
                ans--;
        }
        cout<<ans<<endl;
    }
}