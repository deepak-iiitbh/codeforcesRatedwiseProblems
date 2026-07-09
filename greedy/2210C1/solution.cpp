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
        vector<int> b(a) ;
        for(int i=0 ;i<a ;i++) cin>>v[i] ;
        for(int i=0 ;i<a ;i++) cin>>b[i] ;

        int ans = 0 ;
        for(int i=1 ;i<a-1 ;i++){
            int A = gcd(v[i-1] , v[i]) ;
            int B = gcd(v[i] , v[i+1]) ;
            int lcm = (A*B)/gcd(A , B) ;

            if(lcm< v[i]) ans++ ;
        }
        if(gcd(v[0] , v[1]) < v[0]) ans++ ;
       
            if(gcd(v[a-1] , v[a-2])<v[a-1]) ans++ ;
        
        cout<<ans<<endl ;
    }

    return 0;
}