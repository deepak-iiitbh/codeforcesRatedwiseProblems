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
        int a,b,c ;
        cin>>a>>b>>c ;
        
        
        vector<int> v ;
        int count =  0 ;
        for(int i=0 ;i<a ;i++){
            int x ;
            cin>>x ;
             if(x>c){
                if(count)  v.push_back(count) ;
                count = 0 ;
                continue ;
             }
             else{
                count++ ;
             }
        }
       
        if(count) v.push_back(count) ;
       
        int ans = 0 ;
        for(int i=0 ;i<v.size() ;i++){
            int subarray = v[i]-b+1 ;
            
            if(subarray>0){
                ans += (subarray*(subarray+1))/2 ;
            }
        }
        cout<<ans<<endl ;
        }

    return 0;
}