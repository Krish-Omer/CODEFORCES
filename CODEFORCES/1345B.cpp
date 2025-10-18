#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t,n;
    vector<long long> v1(28000);
    v1[0]=0;
    for(i=1;i<28000;i++)
        v1[i]=((i)*((3*i)+1))/2;
    cin>>t;
    while(t--)
    {
        long long cnt=0,p;
        cin>>n;
        while(n>1)
        {
            if(binary_search(v1.begin(),v1.end(),n))
            {
                cnt++;
                n=0;
            }
            else 
            {
                p=upper_bound(v1.begin(),v1.end(),n)-v1.begin();
                cnt=cnt+(n/v1[p-1]);
                n=n-((v1[p-1])*(n/v1[p-1]));
            }
        }
        cout<<cnt<<endl;
    }
}