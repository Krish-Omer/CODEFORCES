#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i,n,cnt=0,maxi=1;
        set<long long> st;
        cin>>n;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        for(i=1;i<n;i++)
        {
            if(v1[i]==v1[i-1])
                maxi++;
            else if(v1[i]==1+v1[i-1])
            {
                st.insert(maxi);
                maxi=1;
            }
            else 
            {
                st.insert(maxi);
                cnt++;
                maxi=1;
            }
        }
        st.insert(maxi);
        cout<<cnt+(*(--st.end()))<<endl;
    }
}