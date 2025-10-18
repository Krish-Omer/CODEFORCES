#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,i;
    cin>>n;
    string a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i][1]=='+')
            x=x+1;
        if(a[i][1]=='-')
            x=x-1;
    }
    cout<<x<<endl;
}