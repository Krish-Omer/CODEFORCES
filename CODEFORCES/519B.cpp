#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0,q=0,r=0,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        p=p^k;
    }
    for(i=0;i<n-1;i++)
    {
        cin>>k;
        q=q^k;
    }
    for(i=0;i<n-2;i++)
    {
        cin>>k;
        r=r^k;
    }
    i=p^q;
    j=q^r;
    cout<<i<<endl<<j;
}