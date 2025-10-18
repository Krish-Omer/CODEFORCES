#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,cnt=0,bb;
        cin>>a>>b;
        if(a%2==0 && b%2==0)
            cout<<max(a+b,(a*(b/2))+2)<<endl;
        else if(a%2==0 && b%2==1)
            cout<<-1<<endl;
        else if(a%2==1 && b%2==0)
        {
            bb=b;
            while(bb%2==0) 
            {
                bb/=2;
                cnt++;
                if(cnt==2)
                    break;
            }
            if(cnt>=2) 
                cout<<max(a*2+(b/2),a*(b/2)+2)<<endl;
            else
                cout<<-1<<endl;
        }
        else 
            cout<<max(a+b,a*b+1)<<endl;
    }
}