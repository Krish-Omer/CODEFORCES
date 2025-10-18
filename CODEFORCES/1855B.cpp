#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
            cout<<1<<endl;
        else 
        {
            for(i=1;;i++)
            {
                if(n%i!=0)
                    break;
            }
            cout<<i-1<<endl;
        }
    }
}