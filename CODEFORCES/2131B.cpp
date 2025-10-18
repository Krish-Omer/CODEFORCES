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
        ll n,i,ans=3;
        cin>>n;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                cout<<-1<<" ";
            else if(i==n-1)
                cout<<2<<" ";
            else 
                cout<<3<<endl;
        }
        cout<<endl;
    }
}