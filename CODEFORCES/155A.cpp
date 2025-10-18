#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,count1=0,count2,count3;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++) {
        count2=count3=0;
        for(j=0;j<i;j++) {
            if(a[j]>a[i])
                count2++;
            if(a[j]<a[i])
                count3++; }
        if(count2==i)
            count1++;
        if(count3==i)
            count1++; }
    cout<<count1<<endl; }