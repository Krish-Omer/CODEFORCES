#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,count=0,p;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<=a[i])
        {
            p=a[i]-a[i+1];
            a[i+1]=a[i+1]+((p/d)+1)*d;
            count=count+(p/d)+1;
        }
    }
    cout<<endl<<count;
}