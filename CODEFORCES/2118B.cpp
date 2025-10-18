#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        cout<<2*n-3<<endl;
        for(i=1;i<=n;i++)
        {
            if(i==1)
                cout<<1<<" "<<2<<" "<<n<<endl;
            else if(i==n)
                cout<<n<<" "<<1<<" "<<n<<endl;
            else if(i==n-1)
                cout<<n-1<<" "<<1<<" "<<n-1<<endl;
            else 
            {
                cout<<i<<" "<<1<<" "<<i<<endl;
                cout<<i<<" "<<i+1<<" "<<n<<endl;
            }
        }
    }
}