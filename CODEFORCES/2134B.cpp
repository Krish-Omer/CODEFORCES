#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll modinv(ll a , ll m) 
{
    for(ll i=1;i<m;i++)
        if((a*i)%m==1) 
            return i;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> primes={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    ll t;
    cin>>t;
    while(t--) 
    {
        ll i,n,k;
        cin>>n>>k;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        ll g=v1[0];
        for(i=1;i<n;i++) 
            g=__gcd(g,v1[i]);
        if (g>1) 
        {
            for(i=0;i<n;i++) 
                cout<<v1[i]<< " ";
            cout<<endl;
            continue;
        }
        ll p=-1;
        for(auto it:primes) 
        {
            if (k%it!= 0)
            {
                p=it;
                break;
            }
        }
        ll kp=k%p;
        ll inv_k=modinv(kp, p);
        vector<ll> newa(n);
        for (i=0;i<n;i++) {
            ll ai=v1[i];
            ll ai_mod=ai % p;
            if (ai_mod<0) 
                ai_mod+=p; 
            ll neg=(p-ai_mod)%p;
            ll r=(neg*inv_k)%p;
            newa[i]=ai+r*k;
        }
        for (auto x:newa) 
            cout<<x<< " ";
        cout<<endl;
    }
}