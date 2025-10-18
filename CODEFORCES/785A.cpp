#include<bits/stdc++.h>
using namespace std;
#define Tetrahedron 4
#define Cube 6
#define Octahedron 8
#define Dodechedron 12
#define Icosahedron 20
int main() {
    int n,i,sum=0;
    string p;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>p;
        if(p=="Tetrahedron")
            sum+=Tetrahedron;
        if(p=="Cube")
            sum+=Cube;
        if(p=="Octahedron")
            sum+=Octahedron;
        if(p=="Dodechedron")
            sum+=Dodechedron;
        if(p=="Icosahedron")
            sum+=Isocahedron; }
    cout<<sum<<endl; }