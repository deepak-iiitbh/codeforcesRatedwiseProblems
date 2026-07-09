#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    vector<int> v(4) ;
	    for(int i=0 ;i< 4 ;i++){
	        cin>>v[i] ;
	    }
	    int x = v[0]>v[1]?v[0]:v[1] ;
	    int y = v[2]>v[3]?v[2]:v[3] ;
	    sort(v.begin() , v.end() ) ;
	    if(x+y == v[2]+v[3]) cout<<"yes"<<endl ;
	    else cout<<"no"<<endl ;
	}

}
