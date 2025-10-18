#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,h,i,minreq,p,q;
        cin>>n>>h;
        vector<long long> v1(n),diff;
        deque<long long> big;
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            if(i!=0)
                diff.push_back(v1[i]-v1[i-1]);
        }
        sort(diff.begin(),diff.end());
        if(h<=n)
        {
            cout<<1<<endl;
            continue;
        }
        minreq=h/n;
        if(h%n!=0)
            minreq++;
        long long sum=minreq,ssum=0;
        for(i=0;i<n-1;i++)
        {
            sum+=min(minreq,diff[i]);
            if(diff[i]>minreq)
                big.push_back(diff[i]);
            else 
                ssum+=diff[i];
        }
        if(sum>=h)
        {
            cout<<minreq<<endl;
            continue;
        }
        while(true)
        {
            p=h-ssum;
            q=p/(big.size()+1);
            if(p%(big.size()+1)!=0)
                q++;
            if(big.empty() || q<=big.front())
                break;
            else
            {
                while(!big.empty() && q>big.front())
                {
                    ssum+=big.front();
                    big.pop_front();
                }
            }
        }
        for(i=1;;i++)
        {
            long long anssum=q-i;
            for(long long j=0;j<n-1;j++)
                anssum+=min(diff[j],q-i);
            if(anssum<h)
                break;
        }
        cout<<q-i+1<<endl;
    }
}