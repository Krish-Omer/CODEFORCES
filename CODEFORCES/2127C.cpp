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
        ll i,n,ans=0,k,t1,t2,ind,res,ind2;
        bool flag=false;
        cin>>n>>k;
        vector<pair<ll,ll>> v1(n),v2(n),v3(n);
        set<ll> st;
        for(i=0;i<n;i++)
        {
            cin>>v1[i].first;
            v2[i]={v1[i].first,i};
        }
        for(i=0;i<n;i++)
        {
            cin>>v1[i].second;
            v3[i]={v1[i].second,i};
        }
        for(i=0;i<n;i++)
            ans+=abs(v1[i].first-v1[i].second);
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        for(i=0;i<n;i++)
        {
            t1=v2[i].first;
            ind=v2[i].second;
            if(i-1==-1)
            {
                ind2=v2[i+1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v2[i].first-v2[i+1].first)+abs(v1[ind].second-v1[ind2].second);
            }
            else if(i+1==n)
            {
                ind2=v2[i-1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v2[i].first-v2[i-1].first)+abs(v1[ind].second-v1[ind2].second); 
            }
            else 
            {
                ind2=v2[i+1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v2[i].first-v2[i+1].first)+abs(v1[ind].second-v1[ind2].second);
                if(res>=ans)
                    st.insert(res);
                else 
                    flag=true;
                ind2=v2[i-1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v2[i].first-v2[i-1].first)+abs(v1[ind].second-v1[ind2].second); 
            }
            if(res>=ans)
                st.insert(res);
            else 
                flag=true;
        }
        for(i=0;i<n;i++)
        {
            t1=v3[i].first;
            ind=v3[i].second;
            if(i-1==-1)
            {
                ind2=v3[i+1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v3[i].first-v3[i+1].first)+abs(v1[ind].first-v1[ind2].first);
            }
            else if(i+1==n)
            {
                ind2=v3[i-1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v3[i].first-v3[i-1].first)+abs(v1[ind].first-v1[ind2].first); 
            }
            else 
            {
                ind2=v3[i+1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v3[i].first-v3[i+1].first)+abs(v1[ind].first-v1[ind2].first);
                if(res>=ans)
                    st.insert(res);
                else 
                    flag=true;
                ind2=v3[i-1].second;
                res=ans-abs(v1[ind].first-v1[ind].second)-abs(v1[ind2].first-v1[ind2].second)
                +abs(v3[i].first-v3[i-1].first)+abs(v1[ind].first-v1[ind2].first); 
            }
            if(res>=ans)
                st.insert(res);
            else 
                flag=true;
        }
        if(st.empty()||flag)
            cout<<ans<<endl;
        else
            cout<<*(st.begin())<<endl;
    }
}