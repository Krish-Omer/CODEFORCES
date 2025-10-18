#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        if(n%2==0)
            cout<<-1<<endl;
        else 
        {
            for(i=n;i>0;i--)
                cout<<i<<" ";
            cout<<endl;
        }
    }
}