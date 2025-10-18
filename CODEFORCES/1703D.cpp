#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s2,s1(n,'0'),first,second;
        map<int,string> m1;
        map<string,vector<int>> m2;
        for(i=0;i<n;i++)
        {
            cin>>s2;
            m1[i]=s2;
            m2[s2].push_back(i);
        }
        for(auto it:m1)
        {
            s2=it.second;
            for(i=1;i<s2.length();i++)
            {
                first=s2.substr(0,i);
                second=s2.substr(i);
                if(m2.count(first) && m2.count(second))
                {
                    s1[it.first]='1';
                    break;
                }
            }
        }
        cout<<s1<<endl;
    }
}