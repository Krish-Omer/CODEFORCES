#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,p;
    cin>>n;
    if(n%2==0)
        p=n/2;
    else
        p=-((n/2)+1);
    cout<<p<<endl; }