#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin>>t ;
    while(t--){
        int a , b, x ;
        cin>>a>>b>>x ;
        int ans = INT_MAX ;
        int count = 0 ;
        while(a!=b){
            if(a<b) swap(a,b) ;
            ans = min(ans , abs(a-b)+count) ;
            a/=x ;
            count++ ;
        }
        cout<<min(count , ans)<<endl ;
    }
}
