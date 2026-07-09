#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int a ;
	    cin>>a ;
	    map<int , int> mp ;
	    for(int i= 0 ;i< a ;i++) {
	        int x ;
	        cin>>x ;
	        mp[x]++ ;
	    }
	   // cout<<mp.size()<<endl ;
	    if(mp.size()>2) cout<<"No"<<endl ;
	    else if(mp.size()==1) cout<<"Yes"<<endl ;
	    else {
	        auto it = mp.begin();
             auto it2 = next(mp.begin());

           if ( (it->second==it2->second) || abs(it->second - it2->second)==1) {
                cout<<"Yes"<<endl ;
               }
               else cout<<"No"<<endl ;
  
	        
	    }
	}

}
