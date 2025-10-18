#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        vector<int> v1(n),presum(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        presum[0]=v1[0];
        for(i=1;i<n;i++)
            presum[i]=presum[i-1]+v1[i];
        long long ope=k/v1[n-1];
        long long sum=ope*v1[n-1];
        i=n-1;
        while(sum<k && i>=0)
            sum+=v1[i--];
        if(i>0 && sum>=k)
        {
            i++;
            long long pos=ope*n+n-i;
            cout<<n*k-pos+1<<endl;
        }
        else 
            cout<<0<<endl;
    }
}