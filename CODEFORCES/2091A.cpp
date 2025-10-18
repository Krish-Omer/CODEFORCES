#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,p,q=0;
        int arr[10]={0};
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>p;
            arr[p]++;
            if((arr[0]>=3)&&(arr[1]>=1)&&(arr[2]>=2)&&(arr[3]>=1)&&(arr[5]>=1)&&(q==0))
            {
                cout<<i+1<<endl;
                q=1;
            }
        }
        if(q==0)
            cout<<0<<endl;
    }
}