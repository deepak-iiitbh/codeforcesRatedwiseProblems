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
    vector<int> v(a) ;
    for(int i=0 ;i<a ;i++) cin>>v[i] ;
    
    sort(v.begin() , v.end()) ;
    int j = 2 ;
    bool condition = false ;
    int i = 0 ;
    int sum = v[0]+v[1] ;
    while(j<a ){
        if(v[j]<sum){
            condition = true ;
            break ;
        }
        sum+= v[j] ;
        sum-= v[i] ;
        i++ ;
        j++ ;
    }
    if(condition) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
}