#include <bits/stdc++.h>
using namespace std;
long long Maxi(long long x , long long up , long long down)
{
    while(down&&x>0)
    {
        down--;
        x=x/2;
        if(x==0)
            return 0;
    }
    while(up&&x>0)
    {
        up--;
        x=(x+1)/2;
        if(x==1)
            return 1;
    }
    return x;
}
long long Mini(long long x , long long up , long long down)
{
    while(up&&x>0)
    {
        up--;
        x=(x+1)/2;
        if(x==1)
            break;
    }
    while(down&&x>0)
    {
        down--;
        x=x/2;
        if(x==0)
            return 0;
    }
    return x;
}
int main()
{
    long long t,maxi,mini,up,down,num;
    cin>>t;
    while(t--)
    {
        cin>>num>>down>>up;
        {        
            mini=Mini(num,up,down);
            maxi=Maxi(num,up,down);
            cout<<mini<<" "<<maxi<<endl;
        }
    }
}