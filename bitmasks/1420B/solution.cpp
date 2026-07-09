#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ; 
    cin>>a ;
    map<int , int> mp ;
    for(int i=0 ;i<a ;i++){
        int x ;
        cin>>x ;
        int startbit =  31 - __builtin_clz(x); 
        mp[startbit]++ ;

    }
    int total = 0 ;
    for(auto x : mp){
        if(x.second>1){
            total += ((x.second)*(x.second-1))/2 ;
        }
    }
    cout<<total<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}