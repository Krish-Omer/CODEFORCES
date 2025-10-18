#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,v,l,d,w,t;
    cin>>a>>v>>l>>d>>w;
    if(w>=v)
    {
        if(sqrt(2*a*l)<=v)
            t=(sqrt((2*l)/a));
        else 
            t=(((2*a*l)+(v*v))/(2*a*v));
    }
    else 
    {
        if(sqrt(2*a*d)<=w)
        {
            if(sqrt(2*a*l)<=v)
                t=(sqrt((2*l)/a));
            else 
                t=(((2*a*l)+(v*v))/(2*a*v));
        }
        else 
        {
            if(sqrt((w*w)+(2*a*(l-d)))<=v)
                t=(((2*a*a*d)-(a*w*w)+(2*a*w*(sqrt((w*w)+(2*a*(l-d))))))/(2*a*a*w));
            else 
                t=(((2*a*l*w)-(2*a*d*w)+(v*v*w)-(v*w*w)+(w*w*w)+(2*a*v*d))/(2*a*v*w));
        }
    }
    cout<<std::fixed<<setprecision(8)<<t;
}