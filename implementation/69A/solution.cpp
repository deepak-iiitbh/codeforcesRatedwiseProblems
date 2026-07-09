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
    
    vector<int> v(tc*3 , 0) ;
    for(int i=0; i<v.size() ;i++){
        cin>>v[i] ;
    }       
    vector<int>ans ;
    for(int i=0 ;i<3 ;i++){
        int sum = v[i] ;
        for(int j = i+3 ;j<v.size() ;j+=3){
            sum+=v[j] ;
        }
        ans.push_back(sum) ;
    }
    sort(ans.begin() , ans.end()) ;
    
    if(ans[0]==0 && ans[ans.size()-1]==0) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
    

    return 0;
}