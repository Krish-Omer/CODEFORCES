#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q,i,low,mid,high,mini,maxi,x,key;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n>>q;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end(),greater<int>());
        mini=v1[n-1];
        maxi=v1[0];
        for(i=1;i<n;i++)
            v1[i]=v1[i]+v1[i-1];
        for(i=0;i<q;i++)
        {
            cin>>x;
            if(x<=maxi)
            {
                cout<<1<<endl;
                continue;
            }
            if(x>v1[n-1])
            {
                cout<<-1<<endl;
                continue;
            }
            low=0;
            high=n-1;
            mid=(low+high)/2;
            while(low<=high)
            {
                if(v1[mid]==x)
                    break;
                else if (v1[mid]>x)
                    high=mid-1;
                else 
                    low=mid+1;
                mid=(low+high)/2;
            }
            if(v1[mid]==x)
                cout<<mid+1<<endl;
            else 
                cout<<low+1<<endl;
        }
    }
}