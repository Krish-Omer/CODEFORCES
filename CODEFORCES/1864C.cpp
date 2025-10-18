#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool IsPrime(int n) 
{
    if(n<=1) 
        return false;
    if(n<=3) 
        return true;
    if(n%2==0||n%3==0) 
        return false;
    for(int i=5;1LL*i*i<=n;i+=6) 
    {
        if(n%i==0||n%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        vector<ll> ans;
        ans.push_back(x);
        while(x!=1)
        {
            bool flag=false;
            for(ll i=2;i<=sqrt(x);i++)
            {
                if(x%i==0)
                {
                    flag=true;
                    x-=(x/i);
                    ans.push_back(x);
                    break;
                }
            }
            if(!flag)
            {
                x--;
                ans.push_back(x);
            }
        }
        cout<<ans.size()<<endl;
        for(ll i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}