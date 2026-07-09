#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ;
    cin>>a ;
    vector<int>v(a) ;
    for(int i=0 ;i<a ;i++){
        cin>>v[i] ;
    }
    vector<int> pref(a+1) ;
    pref[0] = 0 ;
    for(int i=1 ;i<=a ;i++){
      pref[i] = pref[i-1]+v[i-1] ;
    }
    // for(auto x:pref){
    //     cout<<x<<" " ;
    // }
    // cout<<endl ;
    int lastval = pref[a] ;
    int ans = 1 ;
    for(int i=1 ;i<a ;i++){
        int gc = gcd(pref[i] , lastval) ;
        if(gc>ans){
            ans = gc ;
        }
    }
    cout<<ans<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}