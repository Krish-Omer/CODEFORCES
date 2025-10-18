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
        ll i,n,k,li,ri,reali,a1,a2,a3;
        cin>>n>>k;
        a1=k;a2=k;a3=k;
        vector<pair<pair<ll,ll>,ll>> v1(n),v2(n),v3(n);
        for(i=0;i<n;i++)
        {
            cin>>li>>ri>>reali;
            v1[i]={{li,ri},reali};
            v2[i]={{ri,li},reali};
            v3[i]={{reali,li},ri};
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        for(i=0;i<n;i++)
        {
            li=v1[i].first.first;
            ri=v1[i].first.second;
            reali=v1[i].second;
            if(a1<=ri && a1>=li && a1<reali)
                a1=reali;
        }
        for(i=0;i<n;i++)
        {
            ri=v2[i].first.first;
            li=v2[i].first.second;
            reali=v2[i].second;
            if(a2<=ri && a2>=li && a2<reali)
                a2=reali;
        }
        for(i=0;i<n;i++)
        {
            reali=v3[i].first.first;
            li=v3[i].first.second;
            ri=v3[i].second;
            if(a3<=ri && a3>=li && a3<reali)
                a3=reali;
        }
        cout<<max(max(a1,a2),a3)<<endl;
    }
}