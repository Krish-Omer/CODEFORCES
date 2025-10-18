#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        long long n,i,p=0,maxi=0,mini=1000000001,count=0,minp=1000000001;
        cin>>n;
        long long a[n],b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }
        for(i=0;i<n+1;i++)
        {
            cin>>b[i];
            if(i!=n)
            {
                maxi=max(maxi,b[i]);
                mini=min(mini,b[i]);
                count=count+abs(a[i]-b[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            if((b[n]<=a[i]&&b[n]>=b[i])||(b[n]>=a[i]&&b[n]<=b[i]))
            {
                p=1;
                break;
            }
            minp=min(minp,min(abs(b[n]-b[i]),abs(b[n]-a[i])));
        }
        if(p==1)
            count++;
        else 
        {
            if(b[n]<mini)
                count=count+mini-b[n]+1;
            else if (b[n]>maxi)
                count=count+b[n]-maxi+1;
            else 
                count=count+minp+1;
        }
        cout<<count<<endl;
    }
}