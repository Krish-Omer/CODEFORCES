#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void processAndDisplaySpecialDivisorsForMultipleTestCases() {
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        set<ll> st;
        ll currentBaseValue = 10;
        while (currentBaseValue <=n) {
            if (n % (1 + currentBaseValue) == 0) {
                st.insert(n / (1 + currentBaseValue));
            }
            if (currentBaseValue > n / 10) break;
            currentBaseValue *= 10;
        }
        cout << st.size() << endl;
        vector<ll> sortedSpecialDivisors(st.begin(),st.end());
        sort(sortedSpecialDivisors.begin(), sortedSpecialDivisors.end());
        
        for (ll divisorValue : sortedSpecialDivisors) {
            cout << divisorValue << " ";
        }
        if(st.size() != 0){
            cout << endl;
        }
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    processAndDisplaySpecialDivisorsForMultipleTestCases();
    return 0;
}