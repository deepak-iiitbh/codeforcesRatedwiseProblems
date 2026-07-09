#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a ; 
    cin>>a ;
    int ans = 0 ;
    while(a){
        ans += pow(2 , a) ;
        a-- ;
    }
    cout<<ans<<endl ;
    return 0;
}