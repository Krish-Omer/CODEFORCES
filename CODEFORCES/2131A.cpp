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
        int i,n,ans=0;
        cin>>n;
        vector<int> v1(n),v2(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<n;i++)
            cin>>v2[i];
        for(i=0;i<n;i++)
        {
            if(v1[i]>v2[i])
                ans+=v1[i]-v2[i];
        }
        cout<<ans+1<<endl;
    }
}