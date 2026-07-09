#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a ;
    cin>>a ;
    vector<int> v(a) ;
    for(int i=0 ;i<a ;i++) cin>>v[i] ;
    int x ;
    cin>>x ;
    vector<int> target(x) ;
    for(int i=0 ;i<x ;i++) cin>>target[i] ;
    vector<pair<int , int>> left , right;
    for(int i=0 ;i<a ;i++){
        left.push_back({v[i] , i+1}) ;
    }
    for(int i=a-1 ;i>=0 ;i--){
        right.push_back({v[i] , a-i}) ;
    }

    sort(left.begin() ,left.end()) ;

    sort(right.begin() , right.end()) ;

    sort(target.begin() , target.end()) ;

    int leftcount = 0 ;
    int rightcount = 0 ;
    

    int p = 0 , q = 0 ;
    while(p<a && q<x){
        while( p<a && left[p].first != target[q]) p++ ;
        if(p<a && left[p].first == target[q]){
            leftcount += left[p].second ;
           
            q++ ;
        }
    }
    p = 0 ;
    q = 0 ;
    while(p<a && q<x){
        while(p<a && right[p].first != target[q]) p++ ;
        if(p<a && right[p].first == target[q]){
            rightcount += right[p].second ;
           
            q++ ;
        }
    }

   cout<<leftcount<<" "<<rightcount ;

    return 0;
}