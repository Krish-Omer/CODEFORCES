#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v1;
    string line;
    int count=0,j,i,p,maxi=0,k,l=1;
    while(getline(cin,line)) {
        v1.push_back(line);
        count++;
        p=line.length();
        if(p>maxi)
            maxi=p; }
    for(i=0;i<(count+2);i++) {
        if(i==0||i==(count+1)) {
            for(j=0;j<maxi+2;j++)
                cout<<"*"; }
        else {
            cout<<"*";
            p=(maxi-v1[i-1].length());
            if(p%2==0) {
                for(j=0;j<(p/2);j++)
                    cout<<" ";
                cout<<v1[i-1];
                for(k=(j+v1[i-1].length());k<maxi;k++)
                    cout<<" "; }
            else {
                l++; 
                for(j=0;j<((p/2)+(l%2));j++)
                    cout<<" ";
                cout<<v1[i-1];
                for(k=(j+v1[i-1].length());k<maxi;k++)
                    cout<<" "; }
            cout<<"*"; }
        cout<<"\n"; } }