#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,sum1=0,temp,sum2=0,count=0;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++) {
        cin>>temp;
        v.push_back(temp);
        sum1=sum1+temp; }
    sort(v.begin(),v.end());
    for(i=n-1;i>-1;i--) {
        count++;
        sum2=sum2+v[i];
        if(sum2>((sum1)/2))
            break; }
    cout<<count<<endl; }