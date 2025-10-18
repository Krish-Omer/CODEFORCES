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
        ll i,n,x,y,s,e;
        cin>>n;
        vector<ll> v1(n);
        bool flag=true;
        for(i=0;i<n;i++)
            cin>>v1[i];
        x=n*v1[n-1]-v1[0];
        y=n*v1[0]-v1[n-1];
        if((x%((n*n)-1)!=0)||(y%((n*n)-1)!=0)||(x<0)||(y<0))
        {
            cout<<"NO"<<endl;
            continue;
        }
        x=x/((n*n)-1);
        y=y/((n*n)-1);
        for(s=0;s<n;s++)
        {
            if(x*(s+1)+y*(n-s)!=v1[s])
            {
                flag=false;
                break;
            }
        }
        if(!flag)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}