#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,count=0;
    cin>>n>>m>>a;
    if(a>=n && a>=m)
        cout<<1;
    else 
    {
        if(a>=n&&a<m)
        {
            if(m%a==0)
                cout<<m/a;
            else
                cout<<m/a+1;
        }
        else 
        {
            if(a>=m&&a<n)
            {
                if(n%a==0)
                    cout<<n/a;
                else
                    cout<<n/a+1;
            }
            else
            {
                if(m%a==0 && n%a==0)
                    cout<<(m/a)*(n/a);
                if(m%a!=0 && n%a==0)
                    cout<<(n/a)*((m/a)+1);
                if(m%a==0 && n%a!=0)
                    cout<<(m/a)*((n/a)+1);
                if(m%a!=0 && n%a!=0)
                    cout<<((m/a)+1)*((n/a)+1);
            }
        }
    }
}