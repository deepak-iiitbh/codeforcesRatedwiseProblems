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
        vector<int> v(a) , b(a) ; 
        for(int i=0 ; i<a ;i++) cin>>v[i] ; 
        sort(v.begin() , v.end()) ; 
        for(int i=0 ;i<a ;i++ ) cin>>b[i] ;
        sort(b.rbegin() , b.rend()) ; 
        
        int result = 1 ; 
        for(int i=0 ;i <a ;i++){
            int temp = upper_bound(v.begin() , v.end() , b[i]) - v.begin() ; 
            int idx = v.size() - temp ; 
            result = result*  max(idx -i , 0LL)%MOD ;
        }
        cout<<result<<endl ;


    }

    return 0;
}