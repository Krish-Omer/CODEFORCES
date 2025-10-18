#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,cnte=0,cnto=0;
    cin>>n;
    for(i=1;i<=n;i=i+2)
    {
        if(n%i==0)
            cnto++;
    }
    for(i=2;i<=n;i=i+2)
    {
        if(n%i==0)
            cnte++;
    }
    if(cnte==cnto)
        cout<<"yes";
    else 
        cout<<"no";
}

// lo-2008-1-07 (Win 32)

// n := File standardInput readLine asNumber
// cnte := 0
// cnto := 0
// for(i, 1, n, 2,
//     if(n % i == 0, cnto = cnto + 1)
// )
// for(i, 2, n, 2,
//     if(n % i == 0, cnte = cnte + 1)
// )
// if(cnte == cnto,
//     "yes" println,
//     "no" println
// )