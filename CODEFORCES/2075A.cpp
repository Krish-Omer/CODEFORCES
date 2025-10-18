#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==0)
        {
            if(n%(k-1)==0)
                cout<<(n/(k-1))<<endl;
            else 
                cout<<(n/(k-1))+1<<endl;
        }
        else 
        {
            n=n-k;
            if(n%(k-1)==0)
                cout<<(n/(k-1))+1<<endl;
            else 
                cout<<(n/(k-1))+2<<endl;
        }
    }
}