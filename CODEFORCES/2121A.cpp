#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,s;
        cin>>n>>s;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        if(s<=v1[0])
            cout<<v1[n-1]-s<<endl;
        else if(s>=v1[n-1])
            cout<<s-v1[0]<<endl;
        else if(s-v1[0]>v1[n-1]-s)
            cout<<2*(v1[n-1]-s)+s-v1[0]<<endl;
        else 
            cout<<2*(s-v1[0])+v1[n-1]-s<<endl;
    }
}