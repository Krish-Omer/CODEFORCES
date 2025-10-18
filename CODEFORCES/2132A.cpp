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
        ll n,m,i;
        string a,b,s1;
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>s1;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]=='D')
            {
                char ch=b[i];
                a.push_back(ch);
            }
            else 
            {
                char ch=b[i];
                string s2=to_string(ch-'0');
                a=s2+a;
            }
        }
        cout<<a<<endl;
    }
}