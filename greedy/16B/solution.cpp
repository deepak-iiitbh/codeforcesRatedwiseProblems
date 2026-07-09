#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int ans = 0 ;
    int a , b ;
    cin>>a>>b ;
    vector<pair<int , int>> v ;
    for(int i=0 ;i<b ;i++){
        int x, y ;
        cin>>x>>y ;
        v.push_back({y , x}) ;
    }
    sort(v.begin() , v.end()) ;
    for(int i=b-1 ;i>=0 ;i--){
        if(a==0) break ;
        if(v[i].second>=a){
            ans += a*v[i].first ;
            a = 0 ;
        }
        else {
            ans+= v[i].first * v[i].second ;
            a-= v[i].second ;
        }
    }
    cout<<ans<<endl ;
    return 0;
}