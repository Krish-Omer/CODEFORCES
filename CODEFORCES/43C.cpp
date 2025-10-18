#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,mod0=0,mod1=0,mod2=0,num;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        if(num%3==0)
            mod0++;
        else 
        {
            if(num%3==2)
                mod2++;
            else 
                mod1++;
        }
    }
    cout<<(mod0/2)+min(mod2,mod1);
}