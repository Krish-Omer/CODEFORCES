#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if((7-max(a,b))==2)
    cout<<"1/3";
    else if((7-max(a,b))==3)
    cout<<"1/2";
    else if((7-max(a,b))==4)
    cout<<"2/3";
    else if((7-max(a,b))==6)
    cout<<"1/1";
    else
    cout<<(7-max(a,b))<<"/"<<6;
}