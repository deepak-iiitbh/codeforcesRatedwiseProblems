#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t ;
	cin>>t ;
	while(t--){
	    long long int a, b ;
	    cin>>a>>b ;
	    long long int sum = 0 ;
	    long long int sum2 = 0 ;
	    vector<long long int> v(a) ;
	    for(long long int i=0 ;i<a;i++){
	        cin>>v[i] ;
	        sum+=v[i] ;
	      long long  int x = v[i]%b ;
	        sum2 += v[i]/b ;
	        if(x!=0){
	            sum2++ ;
	        }
	    }
	    
	    if(sum%b!=0){
	       sum = sum/b + 1 ; 
	    }
	    else {
	        sum = sum/b ;
	    }
	    cout<<sum<<" "<<sum2<<endl ;
	}
 
}