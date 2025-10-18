#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,i,p;
    cin>>x;
    x=abs(x);
    for(i=0;;i++)
    {
        p=(i*(i+1))/2;
        if(((i*(i+1))/2)>=x)
            break;
    }
    if(p==x)
        cout<<i;
    else 
    {
        if((p-x)%2==0)
            cout<<i;
        else 
        {
            p=p+i+1;
            if((p-x)%2==0)
                cout<<i+1;
            else 
                cout<<i+2;
        }
    }
}