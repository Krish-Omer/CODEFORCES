#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i,cntbex=0;
    cin>>n>>x>>y;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=x)
            cntbex++;
    }
    if(x>y)
        cout<<n;
    else 
    {
        if(cntbex%2==0)
            cout<<cntbex/2;
        else 
            cout<<(cntbex/2)+1;
    }
}