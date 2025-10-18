#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int i,t,n,k,maxi=0,mini=1000,j,l;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        int a[n],count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }
        cout<<maxi<<mini<<endl;
        for(l=mini;l<=maxi;l++)
        {
            for(j=0;j<n;j++)
            {
                if(l==a[j])
                    count++;
            }
        }
        if(count>=(maxi-mini))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}