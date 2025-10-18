#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0,i;
        string s,e,ss,ee;
        cin>>s>>e;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==e[i])
                cnt++;
            else 
                break;
        }

        if(i==s.length()||e[i]-s[i]!=1)
        {
            cout<<2*cnt<<endl;
            continue;
        }
        ss.push_back(s[i]);
        ee.push_back(e[i]);
        i++;
        while(stoi(ee)-stoi(ss)==1 && i<s.length())
        {
            ss.push_back(s[i]);
            ee.push_back(e[i]);
            i++;
        }
        if(stoi(ee)-stoi(ss)==1)
            cout<<2*cnt+ss.length()<<endl;
        else 
            cout<<2*cnt+ss.length()-1<<endl;
    }
}