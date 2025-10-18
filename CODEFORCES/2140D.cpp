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
        ll i,n,tmp,esum=0,j;
        cin>>n;
        vector<ll> odd;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            if(tmp%2==0)
                esum+=tmp;
            else 
                odd.push_back(tmp);
        }
        if(odd.empty())
        {
            cout<<0<<endl;
            continue;
        }
        sort(odd.begin(),odd.end(),greater<ll>());
        i=0;j=odd.size()-1;
        while(i<=j)
        {
            esum+=odd[i];
            i++;
            j--;
        }
        cout<<esum<<endl;
    }
}