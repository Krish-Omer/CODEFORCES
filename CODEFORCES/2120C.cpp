#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,n,m,t1=0,t2=1;
        cin>>n>>m;
        if((m<n)||(m>((n*(n+1))/2)))
        {
            cout<<-1<<endl;
            continue;
        }
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            v1[i]=i+1;
        if(m==((n*(n+1))/2))
        {
            cout<<v1[n-1]<<endl;
            for(i=n-1;i>0;i--)
                cout<<v1[i]<<" "<<v1[i-1]<<endl;
            continue;
        }
        for(i=n;i<m;i++)
        {
            if(i==m)
                break;
            if(t2==n-1)
            {
                t1=0;
                t2=1;
            }
            swap(v1[t1++],v1[t2++]);
        }
        cout<<v1[0]<<endl;
        for(i=0;i<n-1;i++)
            cout<<v1[i]<<" "<<v1[i+1]<<endl;
    }
}