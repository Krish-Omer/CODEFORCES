#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if((l==r)&&(l==u)&&(l==d))
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
}