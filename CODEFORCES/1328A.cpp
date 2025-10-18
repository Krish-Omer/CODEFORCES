#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        c=a%b;
        if(c==0) {
            cout<<c<<endl;
            continue; }
        if(a>b)
            cout<<b-c<<endl;
        if(a<b)
            cout<<b-a<<endl;
    }
}