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
	    int ans= 0 ;
	    char ch = s[a-1] ;
	    for(int i = a-2 ;i>=0 ;i--){
	        if(s[i]!=ch) ans++ ;
	    }
	    cout<<ans<<endl ;
	}

}
