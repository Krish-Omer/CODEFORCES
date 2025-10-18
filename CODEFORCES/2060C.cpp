#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,t;
    cin>>t;
    for(w=0;w<t;w++)
    {
        int n,k,i,sum=0,p;
        cin>>n>>k;
        int a[n+1]={0};
        for(i=0;i<n;i++)
        {
            cin>>p;
            a[p]++;
        }
        if(k<=n)
        {
            for(i=1;i<=k/2;i++)
            {
                if(i==k-i)
                    sum=sum+a[i]/2;
                else 
                    sum=sum+min(a[i],a[k-i]);   
            }
        }
        else 
        {
            for(i=1;i<=k/2;i++)
            {
                if(k-i<=n)
                {
                    if(i==k-i)
                        sum=sum+a[i]/2;
                    else 
                        sum=sum+min(a[i],a[k-i]);
                }       
            }
        }
        cout<<sum<<endl;
    }
}