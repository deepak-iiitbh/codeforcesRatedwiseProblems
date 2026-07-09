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
       int a , b ; 
       cin>>a>>b ;
       vector<int> v(a) ;
       for(int i=0 ;i<a ;i++) cin>>v[i] ;
       sort(v.begin() , v.end()) ;
       vector<int> pref(a+1) ;
       pref[0] = 0 ;
       for(int i=0 ;i<a ;i++){
           pref[i+1] = pref[i] + v[i] ;
       } 
       int ans = 0;
for(int i = 0; i <= b; i++){
    int left = a - i;
    int right = 2 * (b - i);

    if(right > left) continue;

    ans = max(ans, pref[left] - pref[right]);
}
 cout<<ans<<endl ;
    }
   

    return 0;
}