#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,a1,a2,b1,b2;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int count=0;
        cin>>a1>>a2>>b1>>b2;
        if(a1>b1 && a2>b2)
            count=count+2;
        if(a1==b1 && a2>b2)
            count=count+2;
        if(a1>b1 && a2==b2)
            count=count+2;
        if(a1>b2 && a2>b1)
            count=count+2;
        if(a1==b2 && a2>b1)
            count=count+2;
        if(a1>b2 && a2==b1)
            count=count+2;
        cout<<count<<endl;
    }
}