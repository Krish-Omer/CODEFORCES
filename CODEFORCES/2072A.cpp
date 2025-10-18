#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t;
    cin>>t;
    for(g=0;g<t;g++)
    {
        int n,p,k,q,ans;
        cin>>n>>k>>p;
        if(k==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(k>=-p && k<=p)
            cout<<1<<endl;
        else 
        {
            if(k>p)
            {
                q=k/p;
                if(k%p!=0)
                    q++;
                if(q<=n)
                    cout<<q<<endl;
                else 
                    cout<<-1<<endl;
            }
            else 
            {
                q=k/(-p);
                if((k%(-p))!=0)
                    q++;
                if(q<=n)
                    cout<<q<<endl;
                else 
                    cout<<-1<<endl;
            }
        }
    }
}