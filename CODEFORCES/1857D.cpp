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
        ll i,n,cnt=1;
        cin>>n;
        vector<ll> a(n),b(n),ans;
        vector<pair<ll,ll>> c(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
            c[i]={a[i]-b[i],i+1};
        sort(c.begin(),c.end());
        ans.push_back(c[n-1].second);
        for(i=n-2;i>-1;i--)
        {
            if(c[i].first==c[i+1].first)
            {
                ans.push_back(c[i].second);
                cnt++;
            }
            else 
                break;
        }
        sort(ans.begin(),ans.end());
        cout<<cnt<<endl;
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}