#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,sum=0,p;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>p;
        sum=sum+p; }
    cout<<(float)sum/n<<endl; }