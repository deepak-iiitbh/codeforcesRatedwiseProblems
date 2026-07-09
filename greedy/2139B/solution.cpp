#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t ;
    cin>>t ;
    while(t--){
        long long int a ,b ;
        cin>>a>>b ;
        vector<long long int> v(a) ;
        
        for(int i=0 ;i<a;i++){
            cin>>v[i] ;
        }
        sort(v.begin() , v.end()) ;
        long long int i= a-1 ;
        long long ans = 0 ;
        while(i>=0 && b>0){
            ans+= b*(v[i]) ;
            i-- ;
            b-- ;
        }
        cout<<ans<<endl ;
    }
}
