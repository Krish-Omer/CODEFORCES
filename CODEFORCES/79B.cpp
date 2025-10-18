#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,t,i,p,q,low,high,mid,pos;
    cin>>n>>m>>k>>t;
    vector<pair<int,int>> waste(k);
    for(i=0;i<k;i++)
        cin>>waste[i].first>>waste[i].second;
    sort(waste.begin(),waste.end());
    for(i=0;i<t;i++)
    {
        cin>>p>>q;
        pair<int,int> key={p,q};
        low=0;
        high=k-1;
        mid=low+(high-low)/2;
        while(low<=high)
        {
            if(waste[mid]==key)
                break;
            else if(waste[mid]>key)
                high=mid-1;
            else 
                low=mid+1;
            mid=low+(high-low)/2;
        }
        if(waste[mid]==key)
            cout<<"Waste"<<endl;
        else
        {
            pos=(m*(p-1)+q)%3;
            if(pos==0)
            {
                if(mid%3==0)
                    cout<<"Grapes"<<endl;
                else if(mid%3==1)
                    cout<<"Kiwis"<<endl;
                else 
                    cout<<"Carrots"<<endl;
            }
            else if(pos==1)
            {
                if(mid%3==0)
                    cout<<"Carrots"<<endl;
                else if(mid%3==1)
                    cout<<"Grapes"<<endl;
                else 
                    cout<<"Kiwis"<<endl;
            }
            else
            {
                if(mid%3==0)
                    cout<<"Kiwis"<<endl;
                else if(mid%3==1)
                    cout<<"Carrots"<<endl;
                else 
                    cout<<"Grapes"<<endl;
            }
        }
    }
}