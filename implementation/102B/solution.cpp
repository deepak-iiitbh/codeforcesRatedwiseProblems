#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s ;
    cin>>s ;
    int count = 0 ;
    int add = 0 ;
    while(s.size()!=1){
        for(int i=0 ;i<s.size() ;i++){
            add += s[i]-'0' ;
        }
        s = to_string(add) ;
        count++ ;
        add = 0 ;
    }
    cout<<count<<endl ;
    return 0;
}