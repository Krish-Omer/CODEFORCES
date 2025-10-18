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
        ll i,n,tmp,t1,k=1,sum=0,t2,l;
        bool flag=true;
        cin>>n;
        vector<ll> v1(n);
        // num          cnt  k  acnt
        map<ll,pair<pair<ll,ll>,ll>> m1;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            m1[tmp].first.first++;
            v1[i]=tmp;
        }
        for(auto it:m1)
        {
            if(it.second.first.first%it.first!=0)
            {
                flag=false;
                break;
            }
        }
        if(!flag)
        {
            cout<<-1<<endl;
            continue;
        }
        for(auto &it:m1)
        {
            it.second.first.second=k;
            k+=it.second.first.first/it.first;
        }
        for(i=0;i<n;i++)
        {
            cout<<m1[v1[i]].first.second<<" ";
            m1[v1[i]].second++;
            if(m1[v1[i]].second%v1[i]==0)
                m1[v1[i]].first.second++;
        }
        cout<<endl;
    }
}