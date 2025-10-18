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
        ll n,i,g=-1,c1=0;
        bool flag=false;
        cin>>n;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        if(v1[0]!=v1[1])
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(i=1;i<n;i++)
        {
            if(v1[0]!=v1[i] && v1[i]%v1[0]!=0)
            {
                swap(v1[0],v1[i]);
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}