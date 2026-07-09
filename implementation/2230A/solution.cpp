#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a , b,c ;
    cin>>a>>b>>c ;
    if(3*b < c) cout<<b*a<<endl ;
    else {
        int rem = a%3 ;
        int quoi ;
        quoi = a/3 ;
        
        int mini = 0 ;
        mini = min(rem*b , c) ;
        cout<<quoi*c+mini<<endl ;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}