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
        ll i,n;
        cin>>n;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<n;i++)
            cout<<n+1-v1[i]<<" ";
        cout<<endl;
    }
}