#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,p;
        cin>>num;
        p=sqrt(num);
        if(p*p==num)
        {
            if(p%2==0)
                cout<<p/2<<" "<<p/2<<endl;
            else 
                cout<<p/2<<" "<<p/2+1<<endl;
        }
        else 
            cout<<-1<<endl;
    }
}