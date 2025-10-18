#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,p,low,high,mid,key;
    cin>>n>>m;
    vector<long long> v1(n+1);
    v1[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>p;     
        v1[i]=v1[i-1]+p;
    }
    for(i=0;i<m;i++)
    {
        cin>>p;
        low=0;
        high=n-1;
        mid=(low+high)/2;
        key=p;
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
        if(v1[mid]==key)
            cout<<mid<<" "<<v1[mid]-v1[mid-1]<<endl;
        else 
            cout<<low<<" "<<p-v1[low-1]<<endl;
    }
}