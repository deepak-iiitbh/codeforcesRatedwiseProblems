#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin>>t ;
	while(t--){
	    int a ;
	    cin>>a ;
	    string s ;
	    cin>>s ;
	    int count = 0 ;
	    int ans = 0 , second = 0;
	    for(int i=0 ;i<a ;i++){
	        if(s[i]=='.'){
	            count++ ;
	            second++ ;
	        }
	        else {
	            ans = max(ans , count) ;
	            count = 0 ;
	        }
	    }
	    ans = max(ans , count) ;
	    if(ans>=3) cout<<"2"<<endl ;
	    else cout<<second<<endl ;
	}

}
