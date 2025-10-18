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
        ll n,i,k;
        cin>>n>>k;
        bool flag=true;
        vector<pair<ll,ll>> v1(n),v2(n);
        vector<ll> v3(n),v4(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i].first;
            v1[i].second=(k*((v1[i].first/k)+1))-v1[i].first;
            v3[i]=min((v1[i].first)%k,(v1[i].second)%k);
        }
        for(i=0;i<n;i++)
        {
            cin>>v2[i].first;
            v2[i].second=(k*((v2[i].first/k)+1))-v2[i].first;
            v4[i]=min((v2[i].first)%k,(v2[i].second)%k);
        }
        sort(v3.begin(),v3.end());
        sort(v4.begin(),v4.end());
        for(i=0;i<n;i++)
        {
            if(v3[i]!=v4[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}