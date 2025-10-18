#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j;
    int a[26]={0};
    string s1,s2,s3;
    cin>>k;
    cin>>s1;
    for(i=0;i<s1.length();i++)
        a[s1[i]-'a']++;
    for(i=0;i<26;i++)
    {
        if(a[i]%k!=0)
        {
            cout<<-1<<endl;
            exit(0);
        }
        else 
        {
            a[i]=a[i]/k;
            for(j=0;j<a[i];j++)
                s2.push_back('a'+i);
        }
    }
    for(j=0;j<k;j++)
        s3=s3+s2;
    cout<<s3<<endl;
}