#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        bool flag=false;
        cin>>n;
        string s1;
        cin>>s1;
        map<char,int> m1;
        m1[s1[0]]=1;
        m1[s1[n-1]]=1;
        for(i=1;i<n-1;i++)
        {
            m1[s1[i]]++;
            if(m1[s1[i]]>1)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}