#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a ; 
    cin>>a ;
    
    map<int , int> mp ;
    for(int i=0 ;i<a ;i++){
       int x ;
       cin>>x ;
       mp[x]++ ;
    }
    int ans = 0 ;
    ans+=mp[4] ;
    int mini = min(mp[1] , mp[3]) ;
    ans+=mini ;
    mp[3]-=mini ;
    mp[1]-=mini ;
    ans+= mp[2]/2 ;
    if(mp[3]) ans+=mp[3] ;
    
    
   

       if(mp[1]){
          if(mp[2]%2!=0 && mp[1]>=2){
             ans++ ;
             mp[1]-=2 ;
          }
          ans+=mp[1]/4 ;
          if(mp[1]%4!=0){
           ans++ ;
          }
          
       }
       
       else{
        
        if(mp[2]%2!=0){
            ans++ ;
        }
       }
    
    cout<<ans<<endl ;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    
    while(tc--) solve();
}