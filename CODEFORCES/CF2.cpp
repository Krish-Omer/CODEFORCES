#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,p;
    cin>>n;
    string a[n],s="",k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i].length()>10)
        {
            s=s+a[i][0];
            p=a[i].length()-2;
            k=to_string(p);
            s=s+k;
            s=s+a[i][a[i].length()-1];
            a[i]=s;
            s="";
        }   
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}