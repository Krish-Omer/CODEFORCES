#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,low,high,mid,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s1(n,'a');
        vector<long long> v1(n);
        v1[0]=0;
        for(i=1;i<n;i++)
            v1[i]=n-i;
        for(i=1;i<n;i++)
            v1[i]=v1[i]+v1[i-1];
        low=0;
        high=n-1;
        mid=(high+low)/2;
        k=(n*(n-1))/2-k+1;
        while(low<=high)
        {
            if(v1[mid]==k)
                break;
            if(v1[mid]>k)
                high=mid-1;
            else
                low=mid+1;
            mid=(high+low)/2;
        }
        if(v1[mid]==k)
        {
            s1[n-1]='b';
            s1[mid-1]='b';
        }
        else 
        {
            s1[mid]='b';
            s1[k-v1[mid]+mid]='b';   
        }
        cout<<s1<<endl;
    }
}