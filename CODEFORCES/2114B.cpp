#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s1;
        cin>>s1;
        int gp1=0,gp0=0,ngp=0,s=0,e=n-1,gp;
        while(s<e)
        {
            if(s1[s]==s1[e] && s1[s]=='1')
                gp1++;
            else if(s1[s]==s1[e] && s1[s]=='0')
                gp0++;
            else 
                ngp++;
            s++;
            e--;
        }
        gp=gp1+gp0;
        if(gp==k)
            cout<<"YES"<<endl;
        else if(gp<k)
        {
            int diff=k-gp;
            if(diff%2==0)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
        else 
        {
            if(k<abs(gp1-gp0))
                cout<<"NO"<<endl;
            else 
            {
                int diff=gp-k;
                if(diff%2==0)
                    cout<<"YES"<<endl;
                else 
                    cout<<"NO"<<endl;
            }
        }
    }
}