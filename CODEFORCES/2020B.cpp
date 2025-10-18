#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<k+1+((((k-1)/2)+1)/2)<<endl;
    }
}