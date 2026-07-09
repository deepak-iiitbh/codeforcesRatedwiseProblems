#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a , b ;
    cin>>a>>b ;
    vector<int> v(a) ;
    for(int i=0 ;i<a ;i++) cin>>v[i] ;
    int ans = 0 ;
    int sum = 0 ;
    for(int i=0 ;i<b ;i++) {
        sum+= v[i] ;
    }
    int temp = sum ;
    int i = 0 ;
    int j = b ;
    while(j-i == b && j<a ){
      temp += v[j] ;
      temp -= v[i] ;
      if(temp<sum){
        sum = temp ;
        ans = i+1 ;
      }
      i++ ;
      j++ ;
    }
    cout<<ans+1<<endl ;
    return 0;
}