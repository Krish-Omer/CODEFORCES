#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,t,sa,ea,sb,eb;
    cin>>t;
    for(k=0;k<t;k++) 
    {
        cin>>sa>>ea>>sb>>eb;
        if(ea<sb || eb<sa) 
        {
            cout<<1<<endl;
            continue; 
        }
        if(ea==sb || eb==sa)
        {
            cout<<2<<endl;
            continue;
        }
        if(sa==sb && eb==ea) 
        {
            cout<<eb-sb<<endl;
            continue; 
        }
        if(sa<sb && eb<ea)
        {
            cout<<eb-sb+2<<endl;
            continue;
        }
        if(sa<=sb && eb<=ea)
        {
            cout<<eb-sb+1<<endl;
            continue;
        }
        if(sb<sa && ea<eb)
        {
            cout<<ea-sa+2<<endl;
            continue;
        }
        if(sb<=sa && ea<=eb)
        {
            cout<<ea-sa+1<<endl;
            continue;
        }
        if(sa<sb)
        {
            cout<<ea-sb+2<<endl;
            continue;
        }
        else 
        {
            cout<<eb-sa+2<<endl;
        }
    }
}