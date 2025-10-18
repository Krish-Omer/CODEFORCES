#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end(),greater<int>());
        for(auto it : v1)
            cout<<it<<" ";
        cout<<endl;
    }
}