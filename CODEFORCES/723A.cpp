#include<bits/stdc++.h>
using namespace std;
int main() {
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    if( (x1<=x2 && x2<=x3) || (x3<=x2 && x2<=x1))
        cout<<abs(x2-x1)+abs(x2-x3);
    if( (x2<=x1 && x1<=x3) || (x3<=x1 && x1<=x2))
        cout<<abs(x1-x2)+abs(x1-x3);
    if( (x1<=x3 && x3<=x2) || (x2<=x3 && x3<=x1)) 
        cout<<abs(x3-x1)+abs(x3-x2);}