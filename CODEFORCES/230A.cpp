#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i,p=0;
    cin>>s>>n;
    vector<pair<int,int>> v1(n);
    for(i=0;i<n;i++)
        cin>>v1[i].first>>v1[i].second;
    sort(v1.begin(),v1.end());
    for(i=0;i<n;i++)
    {
        if(s>v1[i].first)
            s=s+v1[i].second;
        else 
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl;
}