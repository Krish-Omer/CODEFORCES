#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,k,n;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        int a[n],maxi=0,mini=1000000001,avg,m,p=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>maxi)
                maxi=a[i];
            if(a[i]<mini)
                mini=a[i];
        }
        avg=(maxi+mini)/2;
        for(i=1;i<n-1;i++)
        {
            m=a[i-1]-avg;
            a[i-1]=avg;
            a[i+1]=a[i+1]+m;
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                cout<<"No"<<endl;
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"Yes"<<endl;
    }
}