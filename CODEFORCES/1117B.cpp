#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,i,p,sum=0,count=0,maxi1=0,maxi2=0;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>p;
        if(p>maxi1)
        {
            maxi2=maxi1;
            maxi1=p;
        }
        else if(p>maxi2 && p<=maxi1)
            maxi2=p;
    }
    p=m/(k+1);
    sum=sum+(p*((k*maxi1)+maxi2));
    sum=sum+(m-(k+1)*p)*maxi1;
    cout<<sum;
}