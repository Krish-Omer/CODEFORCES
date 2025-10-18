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
        int n,i,cnt=1,s=1,e=1,j;
        cin>>n;
        vector<int> v1(n);
        set<int> st;
        for(i=0;i<n;i++)
            cin>>v1[i];
        st.insert(v1[0]);
        for(i=1;i<n;i++)
        {
            auto it=st.find(v1[i]);
            if(it!=st.end())
                st.erase(it);
            if(st.empty())
            {
                s=e;
                e=i;
                for(j=s;j<=e;j++)
                    st.insert(v1[j]);
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}