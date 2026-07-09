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
        vector<int> v(a) ,m(b) ;
        for(int i=0 ;i<a ;i++) cin>>v[i] ;
        for(int i=0 ;i<b ;i++) cin>>m[i] ;

        set<int> s ;
        for(int i=0 ;i<b ;i++){
            if(s.find(m[i])!=s.end()) continue;
            for(int j=0 ;j<a ;j++){
                int power = pow(2 , m[i]) ;
                if(v[j]%power ==0){
                    v[j]+= power/2 ;
                }
            }
            s.insert(m[i]) ;
        }
        for(auto & x:v) cout<<x<<" " ;
        cout<<endl ;
    }

    return 0;
}