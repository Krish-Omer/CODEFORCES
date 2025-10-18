#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,p,m;
    cin>>n;
    map<long long,long long> m1;
    for(i=0;i<n;i++)
    {
        cin>>p;
        m1[p]=i+1;
    }
    cin>>m;
    long long vsum=0,psum=0;
    for(i=0;i<m;i++)
    {
        cin>>p;
        vsum+=m1[p];
        psum+=n+1-m1[p];
    }
    cout<<vsum<<" "<<psum<<endl;
}