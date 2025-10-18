#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,n,i;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        for(i=1;i<n;i++)
            v1[i]=v1[i]+v1[i-1]-1;
        cout<<v1[n-1]<<endl;
    }
}