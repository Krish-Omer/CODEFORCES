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
        ll x,y,z,tmp;
        cin>>x>>y>>z;
        tmp=x&y&z;
        if(((x&y)==tmp)&&((z&y)==tmp)&&((x&z)==tmp))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}