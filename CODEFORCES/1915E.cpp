#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,i,diff=0;
        bool flag=false;
        cin>>n;
        vector<long long> v1(n);
        map<long long,bool> m1;
        m1[0]=true;
        for(i=0;i<n;i++)
            cin>>v1[i];
        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                diff=diff+v1[i];
            else 
                diff=diff-v1[i];
            if(m1.count(diff))
            {
                flag=true;
                break;
            }
            m1[diff]=true;
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}