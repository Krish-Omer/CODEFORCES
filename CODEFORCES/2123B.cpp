#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j,k,temp,i;
        cin>>n>>j>>k;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        if(k>=2)
            cout<<"YES"<<endl;
        else if(k==1)
        {
            temp=v1[j-1];
            sort(v1.begin(),v1.end()); 
            if(temp==v1[n-1])
                cout<<"YES"<<endl; 
            else
                cout<<"NO"<<endl;   
        } 
    } 
}