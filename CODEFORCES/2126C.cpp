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
        ll n,k,i,tmp,pos=0,wl=1;
        bool flag=true;
        cin>>n>>k;
        vector<ll> v1(n),v2;
        for(i=0;i<n;i++)
            cin>>v1[i];
        tmp=v1[k-1];
        sort(v1.begin(),v1.end());
        v2.push_back(v1[0]);
        for(i=0;i<n;i++)
        {
            if(v1[i]==v2[v2.size()-1])
                continue;
            else
            { 
                v2.push_back(v1[i]);
                if(tmp==v2[v2.size()-1])
                    pos=v2.size()-1;
            }
        }
        while(pos!=v2.size()-1)
        {
            ll tmp1=v2[pos+1]-v2[pos];
            wl+=tmp1;
            if(wl-1>v2[pos])
            {
                flag=false;
                break;
            }
            else 
                pos++;
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}