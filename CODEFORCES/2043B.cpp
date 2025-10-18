#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,n,d;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n>>d;
        cout<<"1 ";
        if(d==3||d==6||d==9||n>=3)
            cout<<"3 ";
        if(d==5)
            cout<<"5 ";
        if(n>=3||d==7)
            cout<<"7 ";
        if(d==9||n>=6)
            cout<<"9"<<endl;
        else 
        {
            if((d==3||d==6)&&n>=3)
                cout<<"9"<<endl;
        }
    }
}