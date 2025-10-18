#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long k,t,l,r,i,p;
    cin>>t;
    for(k=0;k<t;k++) 
    {
        long long p=0;
        cin>>l>>r;
        if(l==r) 
        {
            if(l%2==0) 
            {
                if(l/2!=1)
                    cout<<l/2<<" "<<l/2<<endl;
                else 
                    cout<<-1<<endl;
            }
            else 
            { 
                for(i=3;i<=sqrt(l);i=i+2) 
                {
                    if(l%i==0) 
                    {
                        p=1;
                        cout<<i<<" "<<l-i<<endl;
                        break;
                    } 
                }
                if(p==0)
                    cout<<-1<<endl; 
            } 
        }
        else 
        {
            if(r-l==1)
            {
                if(l==2||r==2)
                    cout<<-1<<endl;
                else 
                {
                    if(l%2==0)
                        cout<<l/2<<" "<<l/2<<endl;
                    else 
                        cout<<r/2<<" "<<r/2<<endl;
                }
            }
            else 
            {
                if(l==1 && r==3)
                    cout<<-1<<endl;
                else 
                {
                    if(r%2==0)
                        cout<<r/2<<" "<<r/2<<endl;
                    else 
                        cout<<(r-1)/2<<" "<<(r-1)/2<<endl;
                }
            }
        }
    }
}