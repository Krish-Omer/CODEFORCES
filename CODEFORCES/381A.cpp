#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,p,cs=0,cd=0;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++) {
        cin>>p;
        v.push_back(p); }
    while(v.size()!=0) {
        if(v[0]>=v[v.size()-1]) {
            cs=cs+v[0];
            v.erase(v.begin()); }
        else {
            cs=cs+v[v.size()-1];
            v.erase(v.end()-1); }
        if(v.size()==0)
            break;
        if(v[0]>=v[v.size()-1]) {
            cd=cd+v[0];
            v.erase(v.begin()); }
        else {
            cd=cd+v[v.size()-1];
            v.erase(v.end()-1); } }
    cout<<cs<<" "<<cd<<endl; }