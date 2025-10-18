#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,t,a,b,count;
    cin>>t;
    for(i=0;i<t;i++) {
        count=0;
        cin>>a>>b;
        count=(abs(a-b))/10;
        if((abs(a-b)%10)!=0)
            count++;
        cout<<count<<endl; } }