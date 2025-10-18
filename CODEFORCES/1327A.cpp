#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if((n%2==0 && k%2==1)||(n%2==1 && k%2==0))
            cout<<"NO"<<endl;
        else 
        {
            if(k*k<=n)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
    }
}