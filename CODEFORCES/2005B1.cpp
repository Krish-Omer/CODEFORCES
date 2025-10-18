#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,cells,m,q,k,t1,t2,s,d1,d2,p;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>cells>>m>>q>>t1>>t2>>s;
        if(s>t1 && s>t2)
            cout<<min((cells-t1),(cells-t2))<<endl;
        else
        {
            if(s<t1 && s<t2)
                cout<<min((t1-1),(t2-1))<<endl;
            else 
            {
                p=(t1+t2)/2;
                d1=abs(t1-p);
                d2=abs(t2-p);
                cout<<min(d1,d2)<<endl;
            }
        }
    }
}