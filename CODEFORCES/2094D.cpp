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
        string p,s;
        cin>>p>>s;
        vector<pair<char,int>> v1,v2;
        bool flag=true;
        int i,j,cnt=1;
        for(i=0;i<p.length();i++)
        {
            if(i+1<p.length() && p[i]==p[i+1])
                cnt++;
            else 
            {
                v1.push_back({p[i],cnt});
                cnt=1;
            }
        }
        cnt=1;
        for(i=0;i<s.length();i++)
        {
            if(i+1<s.length() && s[i]==s[i+1])
                cnt++;
            else 
            {
                v2.push_back({s[i],cnt});
                cnt=1;
            }
        }
        if(v1.size()!=v2.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0;i<v1.size();i++)
        {
            if(v1[i].first==v2[i].first && v2[i].second>=v1[i].second && v2[i].second<=2*v1[i].second)
                continue;
            else   
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