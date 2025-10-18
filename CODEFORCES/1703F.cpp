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
        ll i,n,tmp,cnt=0,s,e,key,mid;
        cin>>n;
        vector<pair<int,int>> v1;
        for(i=1;i<=n;i++)
        {
            cin>>tmp;
            if(i>tmp)
                v1.push_back({tmp,i});
        }
        sort(v1.begin(),v1.end());
        for(i=0;i<v1.size();i++)
        {
            s=i+1;e=v1.size()-1;key=v1[i].second;mid=(s+e)/2;
            while(s<=e)
            {
                if(v1[mid].first<=key)
                    s=mid+1;
                else 
                    e=mid-1;
                mid=(s+e)/2;
            }
            cnt+=v1.size()-s;
        }
        cout<<cnt<<endl;
    }
}