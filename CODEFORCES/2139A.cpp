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
        ll a,b;
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(a==lcm(a,b)||b==lcm(a,b))
            cout<<1<<endl;
        else 
            cout<<2<<endl;
    }
}