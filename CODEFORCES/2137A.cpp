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
        double k,x;
        cin>>k>>x;
        cout<<(ll)(pow(2,k)*x)<<endl;
    }
}