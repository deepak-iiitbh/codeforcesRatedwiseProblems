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
        int count = 0 ;
        vector<int> v(a) ;
        for(int i=0 ; i<a ;i++) cin>>v[i] ;
        vector <bool> y(a+1 , false) ;
        for(int i=0 ;i<a ;i++){
            if(y[v[i]]) break ;
            else if(i+1>=v[i]) {
                count++ ;
                y[v[i]] = true ;
            }
            else if(i+1 < v[i] || v[i]!=a) continue ;
        }
        cout<<count<<endl ;
    }

    return 0;
}