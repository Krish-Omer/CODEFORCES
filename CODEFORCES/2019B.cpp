#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,q,i,p,sub=1;
        cin>>n>>q;
        vector<pair<long long,long long>> v1;
        unordered_map<long long,long long> m1;
        for(i=0;i<n;i++)
        {
            cin>>p;
            if(i<(n/2))
            {
                if(i==0)
                    v1.push_back({p,n-1});
                else 
                    v1.push_back({p,v1[i-1].second+n-2*i});
            }
            else 
            {
                if(n%2==1 && i==(n/2))
                    v1.push_back({p,v1[i-1].second+n-2*i});
                else 
                    v1.push_back({p,v1[n-i-1].second});
            }
        }
        for(i=0;i<n;i++)
        {
            m1[v1[i].second]=m1[v1[i].second]+1;
            if(i!=n-1)
                m1[v1[i].second-i]=m1[v1[i].second-i]+v1[i+1].first-v1[i].first-1;
        }
        for(i=0;i<q;i++)
        {
            cin>>p;
            cout<<m1[p]<<" ";
        }
        cout<<endl;
    }
}