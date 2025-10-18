#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,p;
    cin>>n>>k;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    if(k==0)
    {
        if(v[0]==1)
            cout<<-1<<endl;
        else 
            cout<<v[0]-1<<endl;
    }
    else if(k==n)
    {
        cout<<v[n-1]<<endl;
    }
    else 
    {
        if(v[k]==v[k-1])
            cout<<-1<<endl;
        else 
            cout<<v[k-1]<<endl;
    }
}