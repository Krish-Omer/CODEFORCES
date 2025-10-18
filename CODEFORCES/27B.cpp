#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,y,p=0,firstmis,secondmis;
    cin>>n;
    int arr1[n+1]={0};
    int arr2[n+1]={0};
    for(i=0;i<(((n*(n-1))/2)-1);i++)
    {
        cin>>x>>y;
        arr1[x]++;
        arr1[y]++;
        arr2[x]++;
        arr2[y]--;
    }
    for(i=1;i<n+1;i++)
    {
        if(arr1[i]!=n-1 && p==0)
        {
            p=1;
            firstmis=i;
            continue;
        }
        if(arr1[i]!=n-1 && p==1)
        {
            secondmis=i;
            break;
        }
    }
    if(arr2[firstmis]>arr2[secondmis])
        cout<<firstmis<<" "<<secondmis;
    else 
        cout<<secondmis<<" "<<firstmis;
}