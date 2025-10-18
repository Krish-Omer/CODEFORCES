#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,sa=0,sb=0,ca=0,cb=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    j=n-1;
    if(n==1)
        cout<<1<<" "<<0;
    else 
    {
        sa=sa+a[i++];
        ca++;
        sb=sb+a[j--];
        cb++;
        while(i<j)
        {
            if(sa<=sb)
            {
                while((sa<=sb)&&(i!=j))
                {
                    sa=sa+a[i++];
                    ca++;
                }
            }
            else 
            {
                while((sb<sa)&&(i!=j))
                {
                    sb=sb+a[j--];
                    cb++;
                }
            }
        }
        if(i==j)
        {
            if(sa<=sb)
                ca++;
            else 
                cb++;
        }
        cout<<ca<<" "<<cb;
    }
}