#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%4==0)
            cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
        else if(n%4==1 || n%4==3)
            cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        else 
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
    }
}