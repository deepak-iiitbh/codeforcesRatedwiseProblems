// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl '\n'

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve() {
//     int a , b, c ; 
//     cin>>a>>b>>c ;
   
//     map<int , int> mp ;
//     int idx = 1 ;
//     int count = 0 ;
//     vector<int> ans ;
//     for(int i=b ; i<=c && count<a; ){
//           int gc = gcd(idx , i) ;
//           if(mp.find(gc)!=mp.end()){
//             i++ ;
//             continue ;
            
//           }
//           else {
//             ans.push_back(i) ;
//             mp[gc] = 1 ;
//             idx++ ;
//             count++ ;
//           }

//     }
//     if(ans.size()<a){
//         cout<<"NO"<<endl ;
//         return  ;
//     }
//     cout<<"YES"<<endl ;
//     for(auto x:ans){
//         cout<<x<<" " ;

//     }
//     cout<<endl ;
// }

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc = 1;
//     cin >> tc;
//     while(tc--) solve();
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a , l , r ;
    cin>>a>>l>>r ;
    vector<int> ans ;
    for(int i=1 ;i<=a ;i++){
        int ceil = ((l+i-1)/i)*i ;
        if(ceil>r){
            cout<<"NO"<<endl ;
            return ;
        }
        ans.push_back(ceil) ;
    }
    cout<<"YES"<<endl ;
    for(auto x: ans){
        cout<<x<<" " ;
    }
    cout<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}
