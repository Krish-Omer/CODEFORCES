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
        ll i;
        string s1;
        cin>>s1;
        vector<ll> v1(10,0);
        for(i=0;i<s1.length();i++)
            v1[s1[i]-'0']++;
        for(i=0;i<10;i++)
        {
            if(v1[i]!=0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }   
}