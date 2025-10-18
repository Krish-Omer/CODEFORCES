#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,x,y,n,diff,a1,a2,b1,b2,rema,remb;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        if(n>=(a-x+b-y))
            cout<<x*y<<endl;
        else 
        {
            a1=max(x,a-n);
            rema=n-(a-a1);
            b1=max(y,b-rema);
            b2=max(y,b-n);
            remb=n-(b-b2);
            a2=max(y,a-remb);
            cout<<min(a1*b1,a2*b2)<<endl;
        }
    }
}