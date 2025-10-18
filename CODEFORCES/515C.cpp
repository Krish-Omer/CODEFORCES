#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,arr[10]={0};
    cin>>n;
    string s1,s2;
    cin>>s1;
    for(i=0;i<n;i++)
        arr[s1[i]-'0']++;
    arr[2]+=2*arr[4];
    arr[3]+=arr[4];
    arr[4]=0;
    arr[3]+=arr[6];
    arr[5]+=arr[6];
    arr[6]=0;
    arr[2]+=3*arr[8];
    arr[7]+=arr[8];
    arr[8]=0;
    arr[2]+=arr[9];
    arr[3]+=2*arr[9];
    arr[7]+=arr[9];
    arr[9]=0;
    for(i=9;i>1;i--)
    {
        for(j=0;j<arr[i];j++)
            s2.push_back(48+i);
    }
    cout<<s2<<endl;
}