#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    if(v[0]!=1)
    {
        cout<<1;
        exit(0);
    }
    for(i=0;i<n-1;i++)
    {
        if(v[i+1]-v[i]>1)
        {
            cout<<v[i]+1;
            exit(0);
        }
    }
    cout<<v[n-1]+1;
}