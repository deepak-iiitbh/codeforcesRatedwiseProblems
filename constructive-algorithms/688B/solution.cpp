#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s ;
    cin>>s ;
    string k(s.begin() , s.end()) ;
    reverse(k.begin() , k.end()) ;
    s = s+k ;
    cout<<s<<endl ;

    return 0;
}