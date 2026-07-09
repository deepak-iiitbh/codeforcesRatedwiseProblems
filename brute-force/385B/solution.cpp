#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    string s ; 
    cin>>s ;
    if(s.size()<4) {
        cout<<"0"<<endl ;
        return ;
    }
    int start = -1 ;
    int ans = 0 ;
    for(int i=0 ;i<=s.size()-4 ;i++){
        if(s[i]=='b' and s[i+1]=='e' and s[i+2]=='a' and s[i+3]=='r'){
            ans+=(i-start) * (s.size()-(i+3)) ;
            start  = i ;
        }
    }
    cout<<ans<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    
    while(tc--) solve();
}