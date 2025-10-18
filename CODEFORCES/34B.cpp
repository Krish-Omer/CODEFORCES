#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i,p,sum=0,count=0;
    cin>>n>>m;
    vector<int> v;
    for(i=0;i<n;i++) {
        cin>>p;
        if(p<0)
            v.push_back(p);}
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++) {
        sum=sum-v[i];
        count++;
        if(count==m)
            break; }
    cout<<sum<<endl; }