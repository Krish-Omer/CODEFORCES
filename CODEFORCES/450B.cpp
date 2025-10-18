#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,n,p,a[6];
    cin>>x>>y>>n;
    p=n%6;
    a[0]=x-y;
    a[1]=x;
    a[2]=y;
    a[3]=-(x-y);
    a[4]=-x;
    a[5]=-y;
    if(a[p]<0)
        cout<<(a[p]%1000000007+1000000007)%1000000007;
    else 
        cout<<a[p]%1000000007;
}