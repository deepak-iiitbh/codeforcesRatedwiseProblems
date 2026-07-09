#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ; 
	cin>>t ; 
	while(t--){
	    long long a ; 
	    cin>>a ; 
	    vector<long long> v(a) ; 
	    for(long long i=0 ;i<a ;i++ ) cin>>v[i] ; 
	    
	    vector<long long> pref(a+1) ; 
	    pref[0] = 0 ;
	    
	    for(long long i=0 ; i < a ; i ++){
	        pref[i+1] = pref[i]+ v[i] ;
	    }

	    long long ans = -1 ;
	    
	    for(long long i=1 ;i<a ;i++){
	        
	        if(a%i==0){
	            long long mini = LLONG_MAX ;
	            long long maxi = LLONG_MIN ;
	            
	            long long intial = 0 ; 
	            long long second = i ;
	            
	            while(second <= a ){
	                 mini = min(pref[second]-pref[intial] , mini) ; 
	                 maxi = max(pref[second] - pref[intial], maxi) ; 
	                 
	                 
	                 
	                 intial = second;
	                 second = second+i ;
	            }
	            ans = max(ans , llabs(maxi - mini)) ; 
	        }
	    }
	    if(ans==-1) cout<<"0"<<endl ; 
	    else cout<<ans<<endl ;
	}
}