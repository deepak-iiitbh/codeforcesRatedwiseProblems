#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int a ;
	    cin>>a ;
	    vector<int>v(a) ;
	    int min = INT_MAX ;
	    for(int i=0 ; i<a ;i++)
	    {
	        cin>>v[i] ;
	        if(min>v[i]) min = v[i] ;
	        
	    }
	    if(min==v[0]) cout<<"YES"<<endl ;
	    else cout<<"NO"<<endl ;
	}

}
