#include<bits/stdc++.h>
using namespace std;
int main() {
    set<char> s1;
    char p;
     for(;;) {
        cin>>p;
         if(p=='}')
             break;
        s1.insert(p); }
    if(s1.size()>2)
    cout<<s1.size()-2;
    else 
    cout<<s1.size()-1;  }