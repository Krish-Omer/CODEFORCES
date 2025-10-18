#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k,i,tmp=0,cnt=1;
    cin>>n>>k;
    vector<ll> v1(n);
    for(i=0;i<n;i++)
        cin>>v1[i];
    sort(v1.begin(),v1.end());
    for(i=(n/2);i<n-1;i++)
    {
        tmp+=(v1[i+1]-v1[i])*(cnt++);
        if(tmp>k)
        {
            tmp-=(v1[i+1]-v1[i])*(cnt-1);
            cnt--;
            cout<<v1[i]+((k-tmp)/cnt)<<endl;
            return 0;
        }
    }
    tmp=(k-tmp)/(n-(n/2));
    cout<<v1[i]+tmp<<endl;
}