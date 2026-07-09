#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ; 
    cin>>a ;
    vector<int> v(a) ;
    for(int i=0 ;i<a ;i++){
        cin>>v[i] ;
    }
    sort(v.begin() , v.end()) ;
    if(a==1 && v[a-1]<=2){
        cout<<"NO"<<endl ;
    }
    else if( v[a-1]>2) {
        cout<<"YES"<<endl ;
    }
    else {
        

        if(v[a-1]>=2 && v[a-2]>=2) cout<<"YES"<<endl ;
        else cout<<"NO"<<endl ;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}