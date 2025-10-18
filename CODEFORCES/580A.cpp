#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,count=1,maxi=0;
    cin>>n;
    int a[n];
    vector<int> v;
    for(i=0;i<n;i++)
        cin>>a[i];
    v.push_back(count);
    for(i=1;i<n;i++) {
        if(a[i-1]<=a[i]) {
            count++;
            if(i==(n-1))
                v.push_back(count); }
        else {
            v.push_back(count);
            count=1; } }
    for(i=0;i<v.size();i++)
        maxi=max(maxi,v[i]);
    cout<<maxi; }