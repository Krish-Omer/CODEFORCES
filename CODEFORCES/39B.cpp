#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,start=1,k=0,cnt=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==start)
        {
            cnt++;
            b[k++]=2001+i;
            start++;
        }
    }
    if(start==1)
        cout<<0;
    else 
    {
        cout<<cnt<<endl;
        for(i=0;i<k;i++)
            cout<<b[i]<<" ";
    }
}