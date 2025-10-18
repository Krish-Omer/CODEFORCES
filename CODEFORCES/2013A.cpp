#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,n,x,y,c;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n>>x>>y;
        int count=1;
        n=n-y;
        while(n>0)
        {
            count++;
            n=n-min(x,n);
        }        
        cout<<count<<endl;
    }
}