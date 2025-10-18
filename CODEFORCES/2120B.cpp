#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,s,dx,dy,x,y,cnt=0;
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            cin>>dx>>dy>>x>>y;
            if(s%2==0 && x==s/2 && y==s/2)
                cnt++;
            else if(x+y==s && ((dx==1 && dy==-1)||(dx==-1 && dy==1)))
                cnt++;
            else if(x==y && ((dx==1 && dy==1)||(dx==-1 && dy==-1)))
                cnt++;
        }
        cout<<cnt<<endl;
    }
}