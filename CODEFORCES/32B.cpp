#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2="";
    cin>>s1;
    int i;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]=='-')
        {
            if(s1[i+1]=='-')
                s2=s2+'2';
            else
                s2=s2+'1';
            i++;
        }
        else
        {
            s2=s2+'0';
        }
    }
    cout<<s2<<endl;
}