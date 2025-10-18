#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int a1,a2,a3,a4,a5,sum=0;
        cin>>a1>>a2>>a4>>a5;
        if(a1+a2==a4-a2 && a4-a2==a5-a4)
            cout<<3<<endl;
        if(a1+a2==a4-a2 && a4-a2!=a5-a4)
            cout<<2<<endl;
        if(a1+a2==a5-a4 && a4-a2!=a1+a2)
            cout<<2<<endl;
        if(a5-a4==a4-a2 && a4-a2!=a1+a2)
            cout<<2<<endl;
        if(a1+a2!=a4-a2 && a1+a2!=a5-a4 && a4-a2!=a5-a4)
            cout<<1<<endl;
    }
}