#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k%(n-1)==0)
            cout<<(k/(n-1))+((k/(n-1))*(n-1))-1<<endl;
        else 
            cout<<(k/(n-1))+((k/(n-1))*(n-1))+(k%(n-1))<<endl;
    }
}