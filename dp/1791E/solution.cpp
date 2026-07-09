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
    sort(v.begin() , v.end()) ;
    int i=0 ;
    int j=1 ;
    bool condition = true ;
    while(condition && j<a){
        if(v[j]>0){
            if(abs(v[i])>v[j]){
                v[i]*=-1 ;
                v[j]*=-1 ;
            }
            condition = false ;
        }
        else {
            v[i] *=-1 ;
            v[j]*=-1 ;
            i+=2;
            j+=2 ;
        }
    }
    int total = 0 ;
    for(auto x: v){
        total+=x ;
    }
    cout<<total<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}