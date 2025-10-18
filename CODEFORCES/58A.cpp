#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    int i,count=0,p,j;
    s1.erase(0,s1.find('h'));
    if(s1.find('h')<s1.find('e')) {
        s1.erase(1,s1.find('e')-1);
        if(s1.find('e')<s1.find('l')) {
            s1.erase(s1.find('e')+1,s1.find('l')-s1.find('e')-1);
            for(i=s1.find('l')+1;i<s1.length();i++) {
                if(s1[i]=='l'){
                    count++;
                    p=i;
                    break; } }
            if(count>0) {
                for(j=p+1;j<s1.length();j++) {
                    if(s1[j]=='o') {
                        cout<<"YES"<<endl;
                        exit(0); } }
                cout<<"NO"<<endl;
                exit(0); }
            else {
                cout<<"NO"<<endl;
                exit(0); } }
        else {
            cout<<"NO"<<endl;
            exit(0); } }
    else {
        cout<<"NO"<<endl;
        exit(0); } }