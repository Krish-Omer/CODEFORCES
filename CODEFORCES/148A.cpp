#include<bits/stdc++.h>
using namespace std;
int main() {
    int j,k,l,m,n,d,pro;
    cin>>k>>l>>m>>n>>d;
    set<int> s1;
    pro=0;
    for(j=1; ;j++) {
        pro+=k;
        if(pro>d)
            break;
        s1.insert(pro); } 
    pro=0;
    for(j=1; ;j++) {
        pro+=l;
        if(pro>d)
            break;
        s1.insert(pro); }
    pro=0; 
    for(j=1; ;j++) {
        pro+=m;
        if(pro>d)
            break;
        s1.insert(pro); }
    pro=0; 
    for(j=1; ;j++) {
        pro+=n;
        if(pro>d)
            break;
        s1.insert(pro); } 
    cout<<s1.size()<<endl; }