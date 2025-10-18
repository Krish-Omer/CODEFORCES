#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        vector<int> lc,uc;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]>='a' && s1[i]!='b')
                lc.push_back(i);
            if(s1[i]<='Z' && s1[i]!='B')
                uc.push_back(i);
            if(s1[i]=='b' && !lc.empty())
                lc.pop_back();
            if(s1[i]=='B' && !uc.empty())
                uc.pop_back();
        }
        i=0;j=0;
        while(i<uc.size() && j<lc.size())
        {
            if(uc[i]<lc[j])
                s2.push_back(s1[uc[i++]]);
            else 
                s2.push_back(s1[lc[j++]]);
        }
        while(i<uc.size())
            s2.push_back(s1[uc[i++]]);
        while(j<lc.size())
            s2.push_back(s1[lc[j++]]);
        cout<<s2<<endl;
    }
}