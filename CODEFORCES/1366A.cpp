#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,sticks,diamonds,dif,mini,maxi,p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>sticks>>diamonds;
        mini=min(sticks,diamonds);
        maxi=max(sticks,diamonds);
        if(maxi>=2*mini)
            cout<<mini<<endl;
        else 
        {
            p=(2*mini)-maxi;
            if(p%3==0 || p%3==1)
                cout<<maxi-mini+2*(p/3)<<endl;
            else 
                cout<<maxi-mini+1+2*(p/3)<<endl;
        }
    }
}