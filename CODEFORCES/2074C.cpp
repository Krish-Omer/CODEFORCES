#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int x,y,z,p=0,i;
        cin>>x;
        for(i=0;;i++)
        {
            if(x==pow(2,i))
                p=1;
            if(pow(2,i)>x)
                break;
        }
        if(p==1)
            cout<<-1<<endl;
        else 
            cout<<pow(2,i-1)-1<<endl;
    }
}