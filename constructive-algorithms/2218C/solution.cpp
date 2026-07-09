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
        int start = 1 ;
        int second = a+1 ;
        int third = a+2 ;

        int x = a ;
        while(x--){
            cout<<start<<" "<<second<<" "<<third<<" ";
            start++ ;
            second = third+1 ;
            third = second+1 ;
        }
        cout<<endl ;
    }

    return 0;
}