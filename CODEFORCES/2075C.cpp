#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,i,p,low,mid,high,key;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<long long> v1(m),v2(m),sum(m);
        for(i=0;i<m;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        for(i=0;i<m;i++)
        {
            high=m-1;
            low=i+1;
            mid=(low+high)/2;
            key=n-v1[i];
            while(low<=high)
            {
                if(v1[mid]==key)
                    break;
                else if(v1[mid]>key)
                    high=mid-1;
                else 
                    low=mid+1;
                mid=(low+high)/2;
            }
            if(mid!=high)
                v2[i]=m-mid;
            else 
                v2[i]=m-low;
        }
        sum[m-1]=0;
        for(i=m-2;i>=0;i--)
        {
            p=0;
            if(v1[i]+v1[i+1]>=n)
                p=v1[i]+v1[i+1]-n+1;
            sum[i]=p+sum[i+1]-((v1[i+1]-v1[i])*v2[i+1]);
        }
        p=0;
        for(i=0;i<m;i++)
            p=p+sum[i];
        cout<<2*p<<endl;
    }
}