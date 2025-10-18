#include<bits/stdc++.h>
using namespace std;
int maxpower(int n , int k) 
{
    int i;
    for(i=1;;i++) 
    {
        if(pow(k,i)>n)
            break; 
    }
    return i-1; 
}
int main() 
{
    int p,t,i,n,k;
    cin>>t;
    for(p=0;p<t;p++) 
    {
        cin>>n>>k;
        if(n==k)
            cout<<1<<"\n";
        else if(k>n || k==1)
            cout<<n<<"\n";
        else 
        {
            int count=0;
            while(k<n) 
            {
                count++;
                n=n-pow(k,maxpower(n,k)); 
            }
            if(n==k)
                count=count+1;
            else
                count=count+n;
            cout<<count<<"\n"; 
        } 
    } 
}