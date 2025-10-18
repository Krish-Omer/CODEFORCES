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
        set<ll> st;
        int i,n,temp;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            st.insert(temp);
        }
        cout<<st.size()<<endl;
    }
}