#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int i,f1=0,f2=0;
    for(i=0;i<s1.length();i++)
    {
        if(i+2<s1.length()&&((s1[i]=='A'&&s1[i+1]=='B'&&s1[i+2]=='A')||(s1[i]=='B'&&s1[i+1]=='A'&&s1[i+2]=='B')))
        {
            f1=0;
            f2=0;
            break;
        }   
        else if(i+1<s1.length() && s1[i]=='A' && s1[i+1]=='B')
            f1=1;
        else if(i+1<s1.length() && s1[i]=='B' && s1[i+1]=='A')
            f2=1;
    }
    if(f1==1&&f2==1)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}