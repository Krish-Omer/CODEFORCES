#include <bits/stdc++.h>
using namespace std;
void Sieve_of_Eratosthenes(vector<long long> &primes)
{
    vector<bool> Isprime(1e6+1,true);
    Isprime[0]=Isprime[1]=false;
    for(long long i=2;i*i<=1e6;i++)
    {
        if(Isprime[i])
        {
            for(long long j=i*i;j<=1e6;j+=i)
                Isprime[j]=false;
        }
    }
    for(long long i=2;i<=1e6;i++)
    {
        if(Isprime[i])
            primes.push_back(i);
    }
}
int main()
{
    vector<long long> primes;
    Sieve_of_Eratosthenes(primes);
    long long t;
    cin>>t;
    while(t--)
    {
        long long i,n,num,pro=1,cnt,temp;
        cin>>n;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        num=v1[v1.size()-1]*v1[0];
        for(i=0;i<primes.size();i++)
        {
            if(num%primes[i]==0)
            {
                cnt=1;
                temp=num;
                while(temp%primes[i]==0)
                {
                    temp=temp/primes[i];
                    cnt++;
                }
                pro=pro*cnt;
            }
        }
        if(pro-2==n)
        {
            bool flag=true;
            for(i=0;i<n;i++)
            {
                if(num%v1[i]!=0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                cout<<num<<endl;
            else 
                cout<<-1<<endl;
        }
        else 
            cout<<-1<<endl;
    }
}