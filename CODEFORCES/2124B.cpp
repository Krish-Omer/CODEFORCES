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
        ll i,n,minpos,mini,c1=0,c2,c3=0;
        cin>>n;
        vector<ll> v1(n),minvec(n);
        set<ll> ans;
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            if(i==0)
                minvec[0]=v1[i];
            else 
                minvec[i]=min(v1[i],minvec[i-1]);
            c1+=minvec[i];
        }        
        c2=v1[0]+v1[1];
        for(i=0;i<n;i++)
        {
            if(i==0)
                c3+=minvec[0];
            else 
            {
                if(i!=n-1)
                {
                    c3+=minvec[i];
                    ans.insert(c3);
                }
            }
        }
        if(n>2)
            cout<<min(c1,min(c2,*(ans.begin())))<<endl;
        else 
            cout<<min(c1,c2)<<endl;
    }
}