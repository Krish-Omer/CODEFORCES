#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b==1)
            cout<<"NO"<<endl;
        else if(b==2)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*3<<" "<<a*4<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
        }
    }
}