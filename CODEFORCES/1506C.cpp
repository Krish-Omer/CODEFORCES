#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    string s1,s2,s3;
    cin>>t;
    while(t--)
    {
        int maxi=0;
        cin>>s1>>s2;
        map<string,int> m1,m2;
        for(i=0;i<s1.length();i++)
        {
            for(j=i;j<s1.length();j++)
            {
                s3=s1.substr(i,j-i+1);
                m1[s3]=1;
            }
        }
        for(i=0;i<s2.length();i++)
        {
            for(j=i;j<s2.length();j++)
            {
                s3=s2.substr(i,j-i+1);
                m2[s3]=1;
            }
        }
        for(auto it:m1)
        {
            if(m2.count(it.first))
                maxi=max(maxi,(int)it.first.length());
        }
        cout<<s1.length()-maxi+s2.length()-maxi<<endl;
    }
}