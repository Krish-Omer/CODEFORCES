#include<bits/stdc++.h>
using namespace std;
long long MaxParticipants(long long rows, long long columns, long long gap) 
{
    long long Row=columns/(gap + 1);
    long long Desks=columns%(gap+1);
    long long total=rows*Row*gap;
    total+= min(rows*Desks,(rows*columns)-(rows*Row*gap));
    return total;
}
int main() 
{    
    int t;
    cin>>t;
    while(t--) 
    {
        long long row,col,k;
        cin>>row>>col>>k;    
        if (col==1) 
        {
            cout<<(k+row-1)/row<<endl;
            continue;
        }
        long long low=1,high=col;
        long long optimalGap=col;
        while (low<=high) 
        {
            long long mid=(low+high)/2;
            long long maxParticipants=MaxParticipants(row,col,mid);    
            if(maxParticipants>=k) 
            {
                optimalGap=mid;
                high=mid-1;
            } 
            else 
                low=mid+1;
        }
        cout<<optimalGap<<endl;
    }
}