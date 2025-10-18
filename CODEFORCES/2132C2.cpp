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
        ll i,n,ans=0;
        cin>>n;
        vector<ll> v1={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441,1594323,4782969,14348907,43046721,129140163,387420489,1162261467};
        for(i=v1.size()-2;i>-1;i--)
        {
            if(n==0)
                break;
            ans+=(n/v1[i])*(v1[i+1]+(i)*v1[i-1]);
            n=n%v1[i];
        }
        cout<<ans<<endl;
    }
}