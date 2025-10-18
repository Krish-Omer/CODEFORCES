#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)
    {
        cin>>p;
        v[i]=p%2;
    }
    if(v[0]==v[1])
    {
        for(i=2;i<n;i++)
        {
            if(v[i]!=v[0])
            {
                p=i;
                break;
            }
        }
        cout<<p+1<<endl;
    }
    else 
    {
        if(v[2]==v[0])
            cout<<2<<endl;
        else 
            cout<<1<<endl;
    }
}