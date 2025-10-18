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
        ll i,n,s=0,e,cnt=1,q,l,r;
        cin>>n;
        vector<ll> v1(n);
        vector<ll> v2,v3;
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=1;i<n;i++)
        {
            if(v1[i]==v1[i-1])
            {
                e=i;cnt++;
            }
            else 
            {    
                if(cnt!=1)
                {
                    v2.push_back(s);
                    v3.push_back(e);
                }
                cnt=1;s=i;
            }
        }
        if(v1[i-2]==v1[i-1])
        {
            v2.push_back(s);
            v3.push_back(e);
        }
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>l>>r;
            l--;r--;
            if(!v2.empty())
            {
                auto it=upper_bound(v2.begin(),v2.end(),l);
                if(it!=v2.begin())
                    it--;
                ll index=it-v2.begin();
                if(v3[index]>=r && v2[index]<=l)
                    cout<<-1<<" "<<-1<<endl;
                else if(v3[index]>l && r>v3[index])
                    cout<<v3[index]+1<<" "<<v3[index]+2<<endl;
                else 
                    cout<<l+1<<" "<<l+2<<endl;
            }
            else 
                cout<<l+1<<" "<<l+2<<endl;
        }
        cout<<endl;
    }
}