#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--) {
        int a ; 
        cin>>a ;
        vector<int> v(a) ; 
        for(int i=0 ; i<a ;i++) cin>>v[i] ;
        
        
        int i = 0 ; 
        int j = a-1 ; 
        int ans = 0 ;
        while(i<j){
           int x = abs(v[i]-v[j]) ;
           ans = gcd(ans ,x ) ;
           i++ ;
           j-- ;
        }
        
        
        cout<<ans<<endl ;
        
    }

    return 0;
}