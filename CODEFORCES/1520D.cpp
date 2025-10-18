#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,p,t,n;
    cin>>t;
    while(t--)
    {
        long long total=0;
        cin>>n;
        map<long long,long long> m1;
        for(i=0;i<n;i++)
        {
            cin>>p;
            if(m1.count(p-i))
                m1[p-i]++;
            else 
                m1[p-i]=1;
        }
        for(auto it:m1)
            total+=((it.second)*(it.second-1))/2;
        cout<<total<<endl;
    }
}