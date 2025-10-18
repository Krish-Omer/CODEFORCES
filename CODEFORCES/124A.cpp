#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,p,q;
    cin>>n>>a>>b;
    p=n-a;
    q=b+1;
    cout<<min(p,q);
}