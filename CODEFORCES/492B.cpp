#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,i,l;
    cin>>n>>l;
    double maxi=0.0,maxi2;
    vector<int> v1;
    for(i=0;i<n;i++) {
        cin>>p;
        v1.push_back(p); }
    sort(v1.begin(),v1.end());
    for(i=1;i<n;i++)
        maxi=max(maxi,(double((v1[i]-v1[i-1])/2.0)));
    maxi2=max(v1[0],l-v1[n-1]);
    maxi=max(maxi,maxi2);
    cout<<std::fixed<<std::setprecision(10)<<maxi;
}