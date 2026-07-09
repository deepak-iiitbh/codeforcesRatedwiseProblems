#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ,b  ;
    cin>>a>>b ;
    vector<int> v(a) ;
    for(int i=0 ;i<a ;i++) cin>>v[i] ;
    bool ans = false ;
    if(a==1) ans = (v[0]==b) ;
    else {
        sort(v.begin() , v.end()) ;

       int i = 0 ;
       int j = 1 ;
       while(j<a and i<a ){
        if(v[i]+abs(b)==v[j]){
            ans = true ;
            break ;
        }
        else if(v[i]+abs(b) < v[j]) ++i ;
        else ++j ;
       }

    }
    cout<< (ans ? "YES" :"NO")<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}