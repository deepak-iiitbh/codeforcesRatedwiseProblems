#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int a ;
	    cin>>a;
	    string s ;
	    cin>>s ;
	    int right = 0 ;
	    int countsupport = 0 ;
	    for(int i=0 ;i<a ;i++){
	        if(s[i]=='('){
	            right++ ;
	        }
	        else{
	            if(right>0){
	                countsupport++ ;
	                right-- ;
	            }
	        }
	    }
	    cout<<(a-2*countsupport)/2<<endl ;
	}
	

}
