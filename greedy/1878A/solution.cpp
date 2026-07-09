#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t ;
	while(t--){
	    int a,b ;
	    cin>>a>>b ;
	    bool checker = false ;
	    for(int i=0 ;i<a ;i++) {
	        int x ;
	        cin>>x ;
	        if(x==b) checker = true ;
	    }
	    if(checker) cout<<"YES"<<endl ;
	    else cout<<"NO"<<endl ;
	}

}
