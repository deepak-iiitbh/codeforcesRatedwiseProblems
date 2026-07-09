#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int a , k ;
	    cin>>a>>k ;
	    string s ;
	    cin>>s ;
	    bool flag = true ;
	    for(int i=0 ;i<a-k ;i++){
	      if(s[i]=='0') {
	          
	          continue ;
	      }
	      else {
	          s[i] = (s[i] == '0') ? '1' : '0';
              s[i + k] = (s[i + k] == '0') ? '1' : '0';
	      }
	      
	        
	    }
	    for(auto ele : s){
	        if(ele=='1'){
	            flag = false ;
	            break ;
	        }
	    }
	    if(flag) cout<<"YES"<<endl ;
	    else cout<<"NO"<<endl ;
	}

}
