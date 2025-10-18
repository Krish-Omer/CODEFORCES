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
        ll i,n,s,e;
        bool flag=true;
        string s1;
        cin>>n;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        s=0;e=n-1;
        while(s<=e)
        {
            if(flag)
            {
                if(v1[s]<v1[e])
                {
                    s1.push_back('L');
                    s++;
                }
                else 
                {
                    s1.push_back('R');
                    e--;
                }
            }
            else 
            {
                if(v1[s]<v1[e])
                {
                    s1.push_back('R');
                    e--;
                }
                else
                { 
                    s1.push_back('L');
                    s++;
                }   
            }
            flag=!flag;
        }
        cout<<s1<<endl;
    }
}