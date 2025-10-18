#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<double> st;
    double k,p;
    for(k=2;k<=1e6;k++)
    {
        p=3;
        while((((pow(k,p))-1)/(k-1))<=1e6)
        {
            if((static_cast<int>(pow(k,p))-1)%static_cast<int>(k-1)==0)
                st.insert(((pow(k,p))-1)/(k-1));
            p++;
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        if(st.find(n)!=st.end())
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}