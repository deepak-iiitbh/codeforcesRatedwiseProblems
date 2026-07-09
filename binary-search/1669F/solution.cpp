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
    for(int i=0 ;i<a ;i++) cin>>v[i] ;
    vector<int> pref(a+1) , suf(a+1) ;
    pref[0] = suf[0] = 0 ;
    for(int i=1 ;i<=a ;i++){
        pref[i] = pref[i-1]+v[i-1] ;
        suf[i] = suf[i-1]+v[a-i] ;
    }
    int count = 0 ;
    int i = 1 , j =1 ;
    while(i<=a and j<=a and i+j<=a){
        if(pref[i]==suf[j]){
            count = max(count , i+j) ;
            i++ ;
            j++ ;
        }
        else if(pref[i]<suf[j]){
            i++ ;
        }
        else j++ ;
    }
    cout<<count<<endl ; ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}