#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3="9",s4="1";
    long long l,r,i,maxi,mini,p;
    cin>>s1>>s2;
    l=stoll(s1);
    r=stoll(s2);
    if(s1.length()==s2.length())
    {
        for(i=0;i<s1.length()-1;i++)
            s3=s3+"9";
        maxi=stoll(s3);
        p=maxi/2;
        if((p>=l && p<=r)||(p+1>=l && p+1<=r))
            cout<<p*(p+1);
        else 
        {
            if(r<p)
                cout<<r*(maxi-r);
            else 
                cout<<l*(maxi-l);
        }
    }
    else 
    {
        for(i=0;i<s2.length()-1;i++)
            s3=s3+"9";
        maxi=stoll(s3);
        p=maxi/2;
        if((p>=l && p<=r)||(p+1>=l && p+1<=r))
            cout<<p*(p+1);
        else 
        {
            cout<<r*(maxi-r);
        }    
    }
}