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
        ll m,n,x,y,i;
        cin>>m>>n>>x>>y;
        vector<ll> v1(n),v2(m);
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<m;i++)
            cin>>v2[i];
        cout<<m+n<<endl;
    }
}