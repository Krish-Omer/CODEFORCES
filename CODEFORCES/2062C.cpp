#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        long long n,i,maxi,sum=0,p;
        cin>>n;
        p=n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        maxi=sum;
        sum=0;
        while(n!=1)
        {
            for(i=0;i<n-1;i++)
            {
                a[i]=a[i+1]-a[i];
                sum=sum+a[i];
            }
            maxi=max(maxi,abs(sum*1LL));
            sum=0;
            n--;
        }
        cout<<maxi<<endl;
    }
}