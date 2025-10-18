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
        ll i,n,t1,t2;
        cin>>n;
        vector<pair<ll,ll>> v1(n),v2(n);
        for(i=0;i<n;i++)
        {
            cin>>t1>>t2;
            v1[i].first=t1;
            v1[i].second=t2;
            v2[i].first=t2;
            v2[i].second=t1;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(n==1)
            cout<<1<<endl;
        else if(v1[n-1]==v2[n-1])
            cout<<v1[n-2].first*v2[n-2].first<<endl;
        else 
            cout<<min(v1[n-2].first*v2[n-1].first,v1[n-1].first*v2[n-2].first)<<endl;
    }
}