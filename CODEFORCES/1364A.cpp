#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,i,p,q;
    cin>>t;
    while(t--)
    {
        long long sum1=0,sum2=0,start,end;
        cin>>n>>x;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            sum1=sum1+v1[i];
        }
        sum2=sum1;start=0;end=n-1;
        while(sum1%x==0 && start<n)
            sum1=sum1-v1[start++];
        while(sum2%x==0 && end>-1)
            sum2=sum2-v1[end--];
        if(start==n && end==-1)
            cout<<-1<<endl;
        else 
            cout<<max(end+1,n-start)<<endl;
    }
}