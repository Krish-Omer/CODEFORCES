#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        int s,e,leftsum=0,rightsum=0;
        cin>>n;
        s=0;e=n-1;
        vector<int> v1(n);
        pair<int,int> res;
        for(i=0;i<n;i++)
            cin>>v1[i];
        res.first=s;
        res.second=e;
        while(s<=e)
        {
            if(leftsum>rightsum)
                rightsum+=v1[e--];
            else 
                leftsum+=v1[s++];
            if(leftsum==rightsum)
            {
                res.first=s;
                res.second=e;
            }            
        }
        if(res.first==0 && res.second==n-1)
            cout<<0<<endl;
        else 
            cout<<res.first+n-1-res.second<<endl;
    }
}