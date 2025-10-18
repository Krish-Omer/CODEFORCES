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
        ll i,n,temp;
        cin>>n;
        vector<ll> ans;
        map<ll,ll> m1;
        for(i=0;i<(n*(n-1))/2;i++)
        {
            cin>>temp;
            m1[temp]++;
        }
        i=n-1;
        while(!m1.empty())
        {
            auto it=m1.begin();
            ans.push_back(it->first);
            if(it->second==i)
                m1.erase(it);
            else 
                it->second=it->second-i;
            i--;
        }
        for(i=0;i<n-1;i++)
            cout<<ans[i]<<" ";
        cout<<1000000000<<endl;
    }
}