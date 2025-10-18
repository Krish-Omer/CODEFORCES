#include<bits/stdc+.h>
using namespace std;
int main() {
    int t,i,k,count=0;
    cin>>t
    for(k=0;k<t;k++) {
        cin>>a>>b>>c>>d;
        if(a>b)
        count++;
        if(a>c)
        count++;
        if(a>d)
        count++;
        cout<<count<<endl;
    } }