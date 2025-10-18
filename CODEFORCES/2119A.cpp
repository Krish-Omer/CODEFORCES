#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a==b)
            cout<<0<<endl;
        else if(a-b==1 && a%2==1)
            cout<<y<<endl;
        else if(a>b)
            cout<<-1<<endl;
        else 
        {
            if(x<=y)
                cout<<(b-a)*x<<endl;
            else 
            {
                if((b-a)%2==0)
                    cout<<((b-a)/2)*(x+y)<<endl;
                else if(b%2==0)
                    cout<<((((b-a)/2)+1)*x)+(((b-a)/2)*y)<<endl;
                else 
                    cout<<((((b-a)/2)+1)*y)+(((b-a)/2)*x)<<endl;
            }
        }
    }
}