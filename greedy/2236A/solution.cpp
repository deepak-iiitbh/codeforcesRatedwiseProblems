#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int a ;
	    cin>>a ;
	    int mini = INT_MAX ;
	    int maxi = INT_MIN ;
	    for(int i=0 ;i<a ;i++){
	        int x ;
	        cin>>x ;
	        if(x<mini) mini = x ;
	        if(x>maxi) maxi = x ;
	    }
	    cout<<maxi-mini+1<<endl ;
	}

}
