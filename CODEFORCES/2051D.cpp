#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,i,n,low,high,mid,key,cnt1,cnt2,grdcnt=0,total=0;
        cin>>n>>x>>y;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            total+=v1[i];
        }
        sort(v1.begin(),v1.end());
        for(i=0;i<n-1;i++)
        {
            low=i+1;
            high=n-1;
            mid=(low+high)/2;
            key=total-v1[i]-x;
            while(low<=high)
            {
                if(v1[mid]<=key)
                    low=mid+1;
                else 
                    high=mid-1;
                mid=(low+high)/2;
            }
            cnt1=low-1-i;
            low=i+1;
            high=n-1;
            mid=(low+high)/2;
            key=total-v1[i]-(y+1);
            while(low<=high)
            {
                if(v1[mid]<=key)
                    low=mid+1;
                else 
                    high=mid-1;
                mid=(low+high)/2;
            }
            cnt2=low-1-i;
            grdcnt+=cnt1-cnt2;
        }
        cout<<grdcnt<<endl;
    }
}