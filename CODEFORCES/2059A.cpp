#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int n,i,q,p;
        cin>>n;
        set<int> s1,s2;
        for(i=0;i<n;i++)
        {
            cin>>p;
            s1.insert(p);
        }
        for(i=0;i<n;i++)
        {
            cin>>p;
            s2.insert(p);
        }
        p=s1.size();
        q=s2.size();
        if((p==1&&q==1)||(p==1&&q==2)||(p==2&&q==1))
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}