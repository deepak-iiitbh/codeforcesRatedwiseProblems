#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n ;
    cin>>n ;
    string s ;
    cin>>s ;
    int zero = 0 ;
    int one = 0 ;
    for(auto &x:s){
        if(x-'0' ==0) zero++ ;
        else one++ ;
    }
    //cout<<one<<" "<<zero<<endl ;
    if(zero%2){
        cout<<zero<<endl ;
        for(int i=0 ;i<n ;i++){
            if(s[i]-'0' ==0) cout<<i+1<<" " ;
        }
        cout<<endl ;
    }
    else if(one%2==0){
        cout<<one<<endl ;
        for(int i=0 ;i<n ;i++){
            if(s[i]-'0') cout<<i+1<<" " ;
        }
        cout<<endl ;
    }
    else {
        cout<<"-1"<<endl ;
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