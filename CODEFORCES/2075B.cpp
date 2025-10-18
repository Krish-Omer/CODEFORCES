#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        long long sum=0;
        cin>>n>>k;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        if(k==1)
        {
            long long maxi=0;
            for(i=0;i<n;i++)
            {
                if(v1[i]>maxi)
                    maxi=v1[i];
            }
            if((maxi==v1[0])||(maxi==v1[n-1]))
            {
                sort(v1.begin(),v1.end(),greater<long long>()); 
                cout<<v1[0]+v1[1]<<endl;
            }
            else 
                cout<<maxi+max(v1[0],v1[n-1])<<endl;
        }
        else 
        {
            sort(v1.begin(),v1.end(),greater<long long>()); 
            for(i=0;i<=k;i++)
                sum=sum+v1[i];
            cout<<sum<<endl;
        }
    }    
}
