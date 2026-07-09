#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t ;
	cin>>t ;
	while(t--){
	    ll a, b ;
	    cin>>a>>b ;
	    vector<ll> v(a) ;
	    for(ll i=0 ;i<a ;i++){
	        cin>>v[i] ;
	    }
	    sort(v.begin() , v.end()) ;
	    ll count = 1 ;
	    ll ans = INT_MIN ;
	    for(ll i=0 ;i<a-1 ;i++){
	        if(abs(v[i+1]-v[i])<=b){
	            count ++ ;
	        }
	        else {
	            ans = max(count , ans) ;
	            count = 1 ;
	        }
	    }
	    ans = max(ans , count) ;
	    cout<<a-ans<<endl ;
	}

}
