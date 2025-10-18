#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x,i,cnt=0,size=0;
        cin>>n>>x;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end(),greater<int>());
        for(i=0;i<n;i++)
        {
            size++;
            if(v1[i]*size>=x)
            {
                cnt++;
                size=0;
            }
        }
        cout<<cnt<<endl;
    }
}