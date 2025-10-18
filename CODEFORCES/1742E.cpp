#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,q,i,temp,low,mid,high,key;
        cin>>n>>q;
        vector<pair<long long,long long>> v1(n);
        vector<long long> v2(n);
        vector<long long> v3(n);
        for(i=0;i<n;i++)
        {
            cin>>temp;
            v1[i]={temp,i};
        }
        v3[0]=v1[0].first;
        for(i=1;i<n;i++)
            v3[i]=v3[i-1]+v1[i].first;
        sort(v1.begin(),v1.end());
        v2[n-1]=n-1;
        for(i=n-2;i>=0;i--)
            v2[i]=min(v2[i+1],v1[i+1].second);
        for(i=0;i<q;i++)
        {
            cin>>key;
            if(key>=v1[n-1].first)
                cout<<v3[n-1]<<" ";
            else if(key>=v1[0].first)
            {
                low=0;
                high=n-1;
                mid=(low+high)/2;
                while(low<=high)
                {   
                    if(v1[mid].first<=key)
                        low=mid+1;
                    else 
                        high=mid-1;
                    mid=(low+high)/2;
                }
                if(v2[mid]!=0)
                    cout<<v3[v2[mid]-1]<<" ";
                else 
                    cout<<0<<" ";
            }
            else 
                cout<<0<<" ";
        }
        cout<<endl;
    }
}