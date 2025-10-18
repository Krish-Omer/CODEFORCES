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
        ll n,i,pregcd,suffgcd;
        cin>>n;
        vector<ll> pre(n),suff(n),org(n);
        bool flag=true;
        for(i=0;i<n;i++)
        {
            cin>>pre[i];
            if(i!=0 && pre[i-1]%pre[i]!=0)
                flag=false;
        }
        for(i=0;i<n;i++)
        {
            cin>>suff[i];
            if(i!=0 && suff[i]%suff[i-1]!=0)
                flag=false;
        }
        if(flag==false || pre[n-1]!=suff[0])
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0;i<n;i++)
            org[i]=lcm(pre[i],suff[i]);
        pregcd=org[0];
        for(i=1;i<n;i++)
        {
            pregcd=__gcd(pregcd,org[i]);
            if(pregcd!=pre[i])
            {
                flag=false;
                break;
            }
        }
        suffgcd=org[n-1];
        for(i=n-1;i>-1;i--)
        {
            suffgcd=__gcd(suffgcd,org[i]);
            if(suffgcd!=suff[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}