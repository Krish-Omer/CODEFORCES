#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Sieve_of_Eratosthenes(vector<ll> &primes)
{
    vector<bool> Isprime(31623,true);
    Isprime[0]=Isprime[1]=false;
    for(ll i=2;i*i<=31623;i++)
    {
        if(Isprime[i])
        {
            for(ll j=i*i;j<=31623;j+=i)
                Isprime[j]=false;
        }
    }
    for(ll i=2;i<=31623;i++)
    {
        if(Isprime[i])
            primes.push_back(i);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> primes;
    Sieve_of_Eratosthenes(primes);
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,bool> m1;
        ll n,i,j;
        bool flag=false;
        cin>>n;
        vector<ll> v1(n),v2(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            v2[i]=v1[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<primes.size();j++)
            {
                if(primes[j]>v1[i])
                    break;
                if(v1[i]%primes[j]==0)
                {
                    v2[i]=v2[i]/primes[j];
                    if(m1.count(primes[j]))
                    {
                        flag=true;
                        break;
                    }
                    else 
                        m1[primes[j]]=true;
                }
            }
            if(flag)
                break;
        }
        if(flag||__gcd(v1[0],v1[1])>1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(v2[i]<31623)
                continue;
            else if(m1.count(v2[i]))
            {
                flag=true;
                break;
            }
            else
                m1[v2[i]]=true;
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}