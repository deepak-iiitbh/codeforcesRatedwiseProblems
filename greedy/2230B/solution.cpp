#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    string s ;
    cin>>s ;
    int countfour = 0 ;
    int threepresent = 0 ;
    int onepresent = 0 ;
    int counttwo = 0 ;
    int ans  = 0 ;
    for(int i=0 ;i<s.size() ;i++){
        
        
        if(s[i]-'0' == 4) {
            countfour++ ;
            continue ;
        }
        else if(s[i]-'0'==3) threepresent +=1 ;
        else if(s[i]-'0'==1) onepresent +=1 ;
        
        
        else{
            if(onepresent!=0){
                ans++ ;
                onepresent-=1 ;
            }
            else if(threepresent!=0){
                ans++ ;
                threepresent-=1 ;
            }
            
        }

    }
   
    cout<<countfour+ans<<endl ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}