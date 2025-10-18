#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    long long sx=0,sx2=0,sy=0,sy2=0;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        sx=sx+x[i];
        sx2=sx2+x[i]*x[i];
        sy=sy+y[i];
        sy2=sy2+y[i]*y[i];
    }
    cout<<n*(sx2+sy2)-(sx*sx+sy*sy);
}