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
        ll n,i,maxi,mini,s,e;
        bool flag=false;
        cin>>n;
        vector<ll> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        mini=1;maxi=n;s=0;e=n-1;
        while(s<e)
        {
            if(v1[s]==mini)
            {
                mini++;
                s++;
            }
            else if(v1[s]==maxi)
            {
                maxi--;
                s++;
            }
            else if(v1[e]==mini)
            {
                mini++;
                e--;
            }
            else if(v1[e]==maxi)
            {
                maxi--;
                e--;
            }
            else
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<s+1<<" "<<e+1<<endl;
        else 
            cout<<-1<<endl;
    }
}