#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n ;
    cin>>n ;
    vector<int> v(n) ;
    for(int i=0 ;i<n ;i++){
        cin>>v[i] ;
    }

    vector<int> A(n+1, 0) ;
    for(int k=0 ;k<n ;k++) A[k+1] = A[k] + (v[k]==1 ? 1 : -1) ;

    vector<int> B(n+1, 0) ;
    for(int k=0 ;k<n ;k++) B[k+1] = B[k] + (v[k]==3 ? 1 : -1) ;

    vector<int> sufmin(n+1, LLONG_MAX) ;
    for(int k=n-1 ;k>=0 ;k--) sufmin[k] = min(B[k], sufmin[k+1]) ;

    bool ok = false ;
    for(int i=1 ;i<=n-2 ;i++){
        if(A[i]>=0){
            if(sufmin[i+1]<=B[i]){
                ok = true ;
                break ;
            }
        }
    }

    if(ok) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}