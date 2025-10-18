#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int k,t,n,i;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        int a[n],k=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n-1;i++)
        {
            if(((a[i+1]-a[i])!=1) && ((a[i]-a[i-1])!=1))
            {
                k=1;
                break;
            }
        }
        if(k==1 || (n==2 && ((a[1]-a[0])!=1)))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}