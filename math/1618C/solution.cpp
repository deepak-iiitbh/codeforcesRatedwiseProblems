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
    int gcdone = v[0] ;
    int gcdsecond = v[1] ;

    for(int i=0 ;i<a ;i++){
        if(i%2==0) gcdone = gcd(gcdone , v[i]) ;
        else gcdsecond = gcd(gcdsecond , v[i]) ;
    }
    bool conditionone = false ;
    bool conditionsecond = false ;

    for(int i=0 ;i<a ; i+=2){
        if(v[i]%gcdsecond==0) {
            conditionone = true ;
            break ;
        }
    }
    for(int i=1 ;i<a ;i+=2){
        if(v[i]%gcdone==0){
            conditionsecond = true ;
            break ;
        }
    }

    if(conditionone && conditionsecond) cout<<"0"<<endl ;
    else {
         int ans = conditionone==true ? gcdone : gcdsecond ;
         cout<<ans<<endl ;
    }

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