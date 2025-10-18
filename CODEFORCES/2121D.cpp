#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n;
        cin>>n;
        vector<int> a(n),b(n);
        vector<pair<int,int>> v1;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>b[i])
                {
                    v1.push_back({3,i+1});
                    swap(a[i],b[i]);
                }
                if(i!=n-1 && a[i]>a[i+1])
                {
                    v1.push_back({1,i+1});
                    swap(a[i],a[i+1]);
                }
                if(i!=n-1 && b[i]>b[i+1])
                {
                    v1.push_back({2,i+1});
                    swap(b[i],b[i+1]);
                }
            }
        }
        cout<<v1.size()<<endl;
        for(i=0;i<v1.size();i++)
            cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
}