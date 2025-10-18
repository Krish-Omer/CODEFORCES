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
        ll x,n;
        cin>>x>>n;
        if(n%2==0)
            cout<<0<<endl;
        else    
            cout<<x<<endl;
    }
}