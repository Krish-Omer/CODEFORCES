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
        int i,n,k,cnt=0,ans=0;
        bool flag=false;
        cin>>n>>k;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<n;i++)
        {
            if(flag)
            {
                flag=false;
                continue;
            }
            if(v1[i]==0)
                cnt++;
            else 
                cnt=0;
            if(cnt==k)
            {
                ans++;
                cnt=0;
                flag=true;
            }
        }
        cout<<ans<<endl;
    }
}