#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    map<string,int> m1;
    string s1,s2,s3="";
    for(i=0;i<n;i++)
    {
        cin>>s1;
        if(!m1.count(s1))
        {
            cout<<"OK"<<endl;
            m1[s1]=1;
        }
        else 
        {
            s2=to_string(m1[s1]);
            s3=s1+s2;
            cout<<s3<<endl;
            m1[s1]++;
        }
    }
}