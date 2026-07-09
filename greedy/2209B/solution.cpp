#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int a ;
    cin>>a ;
    
    vector<int> v(a) ;
    for(int i=0 ;i<a ;i++){
        cin>>v[i] ;
    }
    multiset<int> s(v.begin() , v.end()) ;
    vector<int> ans ;
    for(int i=0 ;i<a-1 ;i++){
        auto it = s.find(v[i]) ;
        int left = distance(s.begin() , s.lower_bound(v[i])) ;
        int right = distance(s.upper_bound(v[i]) , s.end()) ;
        ans.push_back(max(left , right)) ;
        s.erase(it) ;
    }
    ans.push_back(0) ;
    for(auto x:ans){
        cout<<x<<" " ;
    }
    cout<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--) {
        solve() ;
    }

    return 0;
}