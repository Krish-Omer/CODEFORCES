#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,p,q,sum1,sum2,k;
    cin>>t;
    while(t--)
    {
        int maxi1=0,maxi2=0;
        cin>>n;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        cin>>m;
        vector<int> v2(m);
        for(i=0;i<m;i++)
            cin>>v2[i];
        i=0;j=0;
        for(i=1;i<n;i++)
            v1[i]+=v1[i-1];
        for(i=1;i<m;i++)
            v2[i]+=v2[i-1];
        for(i=0;i<n;i++)
            maxi1=max(maxi1,v1[i]);
        for(i=0;i<m;i++)
            maxi2=max(maxi2,v2[i]);
        cout<<maxi1+maxi2<<endl;
    }
}