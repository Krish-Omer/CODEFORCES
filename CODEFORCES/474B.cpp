#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,low,high,mid,key;
    cin>>n;
    vector<int> v1(n);
    for(i=0;i<n;i++)
        cin>>v1[i];
    for(i=1;i<n;i++)
        v1[i]=v1[i]+v1[i-1];
    cin>>m;
    vector<int> v2(m);
    for(i=0;i<m;i++)
        cin>>v2[i];
    for(i=0;i<m;i++)
    {
        low=0;
        high=n-1;
        mid=low+((high-low)/2);
        key=v2[i];
        while(low<=high)
        {
            if(v1[mid]==key)
                break;
            else if (v1[mid]>key)
                high=mid-1;
            else 
                low=mid+1;
            mid=low+((high-low)/2);
        }
        cout<<mid+1<<endl;
    }
}