#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    int i,gcd,lcm;
    for(i=1;i<=(min(a,b)/2);i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    lcm=((a*b)/gcd);
    return lcm;
}
int main()
{
    int k,t,l,r,i;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>l>>r;
        for(i=l;i<=l;i++)
        {
             
        }
    }
}