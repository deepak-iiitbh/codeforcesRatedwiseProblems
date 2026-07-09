#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ; 
    cin>>a ;
    vector<int> v(a) ;
    for(int i=0 ;i<a ;i++) cin>>v[i] ;
    sort(v.rbegin() , v.rend()) ;
    bool ok = true ;
    for(int i=0 ;i<a-2 ;i++){
        if(v[i]%v[i+1] !=v[i+2]){
            ok = false;
            break ;
        }
    }
    if(ok) cout<<v[0]<<" "<<v[1]<<endl ;
    else cout<<"-1"<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}