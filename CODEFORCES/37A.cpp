#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1001]={0},p,maxi=0,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        a[p]++;
    }
    for(i=1;i<1001;i++)
    {
        if(a[i]>maxi)
        {
            p=i;
            maxi=a[i];
        }
        if(a[i]>0)
            cnt++;
    }
    cout<<a[p]<<" "<<cnt;
}