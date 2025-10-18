#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,i,p=0,b[100001]={0},first,sum2=0,second,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        b[k]++;
    }
    for(i=1;i<100001;i++)
    {
        if(b[i]!=0 && p==0)
        {
            p=1;
            first=i;
        }
        else
        {
            if(b[i]!=0 && p==1)
            {
                second=i;
                p=-1;
            }
        }
        b[i]=b[i]*i;
    }
    i=first;
    while(i<100000)
    {
        if(i==first)
            sum1=sum1+b[i];
        p=i+3;
        i=i+2;
        if(p<=100000)
        {
            if(b[i]>=b[p] && i<100000)
            {
                sum1=sum1+b[i];
            }
            if(b[p]>b[i] && p<100000)
            {
                sum1=sum1+b[p];
                i=p;
            }
        }
        else 
            sum1=sum1+b[100000]; 
    }
    if(second-first==1)
    {
        i=second;
        while(i<100000)
        {
            if(i==second)
                sum2=sum2+b[i];
            p=i+3;
            i=i+2;
            if(p<=100000)
            {
                if(b[i]>=b[p] && i<100000)
                {
                    sum2=sum2+b[i];
                }
                if(b[p]>b[i] && p<100000)
                {
                    sum2=sum2+b[p];
                    i=p;
                }
            }
            else 
                sum2=sum2+b[100000];   
        }   
    }
    cout<<max(sum1,sum2);
}