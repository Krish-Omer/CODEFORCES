#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s,t;
    cin>>s1>>s2;
    int i,a2[10]={0},l1,l2,p,j;
    l1=s1.length();
    l2=s2.length();
    for(i=0;i<l2;i++)
    {
        s=s2[i];
        p=stoi(s);
        a2[p]++;
    }
    for(i=0;i<l1;i++)
    {
        s=s1[i];
        p=stoi(s);
        for(j=9;j>p;j--)
        {
            if(a2[j]!=0)
            {
                s1[i]=j+48;
                a2[j]--;
                break;
            }
        }
    }
    cout<<s1;
}