#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k ;
    cin>>n>>k ;
    vector<int> v(n+2) ;
    for(int i=1 ;i<= n ;i++){
        cin>>v[i] ;
    }
    int position ;
    cin>>position ;
    v[0] = v[n+1] = v[position] ;
    int left = 0 ; 
    int right = 0 ;
    for(int i=0 ;i<position ; i++){
        if(v[i]!=v[i+1]){
            left++ ;
        }
    }
    for(int i=position ; i <= n ; i++){
        if(v[i]!=v[i+1]){
            right++ ; 
        }
    }
    cout<<max(left, right)<<endl ; 
}

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
    cin.tie(0) ;
    int t ; 
    cin>>t ;
    while(t--){
        solve() ;
        
    }

}
