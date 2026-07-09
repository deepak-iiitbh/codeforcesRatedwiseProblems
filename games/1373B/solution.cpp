#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    string s ;
	    cin>>s ;
	    sort(s.begin() , s.end()) ;
	    int x = 0 ;
	    int y = 0 ;
	    for(int i=0 ;i<s.size(); i++){
	        if(s[i]=='0') x++ ;
	        else y++ ;
	    }
	    
	    int t = min(x , y) ;
	    if(t%2==1) cout<<"DA"<<endl ;
	    else cout<<"NET"<<endl ;
	}

}
