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
        ll n,x,y,i,ans=0;
        cin>>n>>x>>y;
        map<ll,list<ll>> m1;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
        {   
            cin>>v1[i];
            m1[v1[i]%x].push_back(v1[i]);
        }
        for(auto t1:m1)
        {
            map<ll,ll> m2;
            if(t1.first==0||2*t1.first==x)
            {
                for(auto it:t1.second)
                    m2[it%y]++;
                for(auto it:m2)
                    ans+=((it.second)*(it.second-1))/2;
                continue;
            }
            if(t1.first>x/2)
                break;
            for(auto it:t1.second)
                m2[it%y]++;
            for(auto it:m1[x-t1.first])
            {
                if(m2.count(it%y))
                    ans+=m2[it%y];
            }
        }
        cout<<ans<<endl;
    }
}