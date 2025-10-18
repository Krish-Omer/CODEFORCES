#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,sum,p,maxi,cnt,diff;
    cin>>t;
    while(t--)
    {
        cnt=0;
        maxi=1;
        cin>>n;
        map<long long,long long> m1;
        for(i=0;i<n;i++)
        {
            cin>>p;
            if(m1.count(p))
            {
                m1[p]++;
                if(m1[p]>maxi)
                    maxi=m1[p];
            }
            else 
                m1[p]=1;
        }
        sum=maxi;
        p=1;
        for(i=0;;i++)
        {
            if(sum>=n)
                break;
            if(i%2==1)
            {
                sum+=p*maxi;
                cnt=cnt+p*maxi;
                p++;
                if(sum>n)
                    cnt=cnt-sum+n;
            }
            else 
                cnt++;
        }
        cout<<cnt<<endl;
    }
}