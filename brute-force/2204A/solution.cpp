#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ;
    cin>>a ;
    string s ;
    cin>>s ;
    int count = 0 ;
    for(auto ele : s){
        if(ele == 'L'){
            count++ ;
            break;
        }
        else count++ ;
    }
    cout<<count<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}