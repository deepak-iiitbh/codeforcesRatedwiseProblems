#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   vector<int> store(3) ;
   vector<string> v(3) ;
   for(int i=0 ;i<3 ;i++){
    cin>>v[i] ;
   }
   for(int i=0 ;i<3 ;i++){
       if(v[i][1]== '>'){
        store[v[i][0]-'A']++ ;
       }
       else {
        store[v[i][2]-'A']++ ;
       }
   }
   vector<pair<int ,int>> p ;
   for(int i=0 ;i<3 ;i++){
      p.push_back({store[i],i}) ;
   }
   sort(p.begin() , p.end()) ;
   //cout<<p[2].first<<endl ;
   if(p[2].first<2) {
    cout<<"Impossible" ;
   }
   else{
    for(auto x:p){
    char num = 'A' + x.second ;
    cout<<num ;
   }
   }

    return 0;
}