#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,a,p;
        double q;
        cin>>x>>y>>a;
        p=a/(x+y);
        q=a-(p*(x+y))+0.5;
        if(q<=x)
            cout<<"NO"<<"\n";
        else 
            cout<<"YES"<<"\n";
    }
}