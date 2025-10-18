#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,c,d,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>d;
        vector<int> v1(n*n),v2(n*n);
        for(i=0;i<n*n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        v2[0]=v1[0];
        for(i=1;i<n;i++)
            v2[i]=v2[i-1]+d;
        int cnt=n;
        for(i=0;i<n;i++)
        {
            for(j=1;j<n;j++)
                v2[cnt++]=v2[i]+j*c;
        }
        sort(v2.begin(),v2.end());
        for(i=0;i<n*n;i++)
        {
            if(v1[i]!=v2[i])
            {
                cnt=0;
                break;
            }
        }
        if(cnt==0)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}