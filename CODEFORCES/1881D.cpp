#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Sieve_of_Eratosthenes(vector<pair<ll,ll>> &primes)
{
    vector<bool> Isprime(1e3+1,true);
    Isprime[0]=Isprime[1]=false;
    for(ll i=2;i*i<=1e3;i++)
    {
        if(Isprime[i])
        {
            for(ll j=i*i;j<=1e3;j+=i)
                Isprime[j]=false;
        }
    }
    for(ll i=2;i<=1e3;i++)
    {
        if(Isprime[i])
            primes.push_back({i,0});
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        vector<pair<ll,ll>> primes;
        Sieve_of_Eratosthenes(primes);
        ll n,i,j,tmp;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            for(j=0;j<primes.size();j++)
            {
                if(tmp%primes[j].first==0)
                {
                    tmp=tmp/primes[j].first;
                    primes[j].second++;
                    j--;
                }
                if(tmp==1)
                    break;
            }
            if(tmp!=1)
                primes.push_back({tmp,1});
        }
        bool flag=true;
        for(i=0;i<primes.size();i++)
        {
            if(primes[i].second%n!=0)
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