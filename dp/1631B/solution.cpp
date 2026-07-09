#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ; 
    cin>>a ;
    vector<int> v(a+1) ;
    for(int i=1 ; i<=a ;i++) cin>>v[i] ;
    vector<int> b = v ;
    reverse(b.begin()+1 , b.end()) ;

    int ans = 0 ; 
    int x = 1 ; 
     
    while(x<a){
        if(b[x+1]==b[1]){
            x++ ;
            continue ;
        }
        x = x*2 ;
        ans++ ;
    }
    cout<<ans<<endl ;;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}