#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int m,n,i,sum=0,peri,xi,yi,xin,yin,xf,yf;
        cin>>n>>m;
        peri=4*m*n;
        for(i=0;i<n;i++)
        {
            if(i==0)
                cin>>xi>>yi;
            else 
            {
                cin>>xin>>yin;
                xi=xi+xin;
                yi=yi+yin;
                sum=sum+xf-xi+yf-yi;
            }
            xf=xi+m;
            yf=yi+m;
        }
        cout<<peri-(2*sum)<<endl;
    }
}