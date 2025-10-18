#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0;
    cin>>n;
    int org[n],cnt[n+1]={0};
    for(i=0;i<n;i++)
    {
        cin>>org[i];
        if(org[i]>n)
            p=1;
        else 
            cnt[org[i]]++;
    }
    if(p==1)
    {
        cout<<-1;
        exit(0);
    }
    for(i=1;i<n-1;i++)
    {
        if(cnt[i]<cnt[i+1])
        {
            cout<<-1;
            exit(0);
        }
    }
    cout<<cnt[1]<<endl;
    for(i=0;i<n;i++)
    {
        cout<<cnt[org[i]]<<" ";
        cnt[org[i]]--;
    }
}