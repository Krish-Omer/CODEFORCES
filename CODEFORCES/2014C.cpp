#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i,n,sum=0,temp;
        cin>>n;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            sum+=v1[i];
        }
        sort(v1.begin(),v1.end());
        if(n==1||n==2)
        {
            cout<<-1<<endl;
            continue;
        }
        temp=2*n*v1[n/2]-sum;
        if(temp<0)
            cout<<0<<endl;
        else 
            cout<<temp+1<<endl;
    }
}