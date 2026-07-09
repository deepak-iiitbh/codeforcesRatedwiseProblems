#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int a ;
	    cin>>a ;
	    long long min = INT_MAX ;
	    vector<long long >v(a) ;
	    for(long long int i=0 ;i<a ;i++){
	        cin>>v[i] ;
	        if(v[i]<min) min = v[i];
	    }
	    long long ans = v[0] ;
	    for(long long int i=1 ;i<a ;i++){
	        ans&= v[i] ;
	    }
	    cout<<ans<<endl ;
	}

}
