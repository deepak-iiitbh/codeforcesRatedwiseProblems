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
        string s ;
        cin>>s ;
        vector<int> v(2 , 0) ;
        for(int i=0 ; i<s.size() ;i++){
            if(s[i]-'0') v[1] ++;
            else v[0]++ ;
        }
        if(v[0]==v[1]){
            cout<<"0"<<endl ;
        }
        else{
          for(int i=0 ;i<s.size() ;i++){
            int x = 1 - (s[i]-'0') ;
            if(v[x]){
                v[x]-- ;
            }
            else {
                cout<<s.size()-i<<endl  ;
                break ;
            }
        }
        }
       
    }

    return 0;
}