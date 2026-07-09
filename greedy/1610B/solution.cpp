#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool is_pal(int i , int j , int num , vector<int> &v){
    while(i<=j){
        while(i<=j && v[i]==num) i++ ;
        while(i<=j && v[j]==num) j-- ;

        if(i<=j && v[i]!=v[j]) return false ;

        i++;
        j--;
    }
    return true ;
}

void solve() {
    int a ; 
    cin>>a ;
    vector<int> v(a) ;
    for(int i=0 ; i<a ;i++) cin>>v[i] ;
    bool checker = false ;
    int i = 0 ; 
    int j = a-1 ;
    while(i<=j && checker==false){
        if(v[i]==v[j]){
            i++ ;
            j-- ;
        }
        else {
           checker = is_pal(i , j , v[i], v ) || is_pal(i , j , v[j] , v);

            break ;
        }
    }

    if(checker || i>=j) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}