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
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        bool ans = true ;
        if(n&1){
            if(s[0]=='b'){
                ans = false ;
                
            }
            for(int i=1 ;i<n ;i+=2){
                if(s[i]!=s[i+1] || s[i]=='?' || s[i+1]=='?') continue ;
                else {
                    ans = false ;
                    
                }
            }
            
            
        }
        else {
           
            for(int i=0 ;i<n ;i+=2){
                if(s[i]!=s[i+1] || s[i]=='?' || s[i+1]=='?') continue ;
                else {
                    ans = false ;
                    
                }
            }
            
            
        }
        if(ans) cout<<"YES"<<endl ;
        else cout<<"NO"<<endl ;
    }

    return 0;
}