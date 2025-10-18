#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,diff=0,q,r;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
        diff=diff+a[n-1]-a[i];
    if(diff>=a[n-1])
        cout<<a[n-1];
    else
    { 
        a[n-1]=a[n-1]-diff;
        if(a[n-1]<n)
            cout<<a[n-1]+1+diff;
        else 
        {
            q=(a[n-1]/(n-1));
            a[n-1]=a[n-1]-(q*(n-1));
            if(a[n-1]!=0)
                cout<<q*n+diff+a[n-1]+1;
            else 
                cout<<q*n+diff+a[n-1];
        }
    }
}