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
        ll i,n,tmp,ans=0,os=0,es=0;
        cin>>n;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<n-1;i++)
        {
            if(i%2==0) //odd even
            {
                if(v1[i]>v1[i+1]) 
                {
                    tmp=v1[i]-v1[i+1];;
                    v1[i]=v1[i+1];
                    ans+=tmp;
                }
            }
            else     //even odd
            {
                if(v1[i]<v1[i+1])
                {
                    tmp=v1[i+1]-v1[i];
                    v1[i+1]=v1[i];
                    ans+=tmp;
                }    
            }
        }
        for(i=0;i<n-2;i++)
        {
            if(i%2==0)  // o e o
            {
                os=v1[i]+v1[i+2];
                es=v1[i+1];
                if(os>es)
                {
                    ans+=os-es;
                    v1[i+2]=v1[i+1]-v1[i];
                }
            }
        }
        cout<<ans<<endl;
    }
}