#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int cnt10=0,cnt01=0;
        string s1;
        cin>>s1;
        for(i=0;i<s1.length()-1;i++)
        {
            if(s1[i]=='0' && s1[i+1]=='1')
                cnt01++;
            if(s1[i]=='1' && s1[i+1]=='0')
                cnt10++;
        }
        if(cnt01)
            cout<<cnt10+cnt01<<endl;
        else 
            cout<<cnt10+1<<endl;
    }
}