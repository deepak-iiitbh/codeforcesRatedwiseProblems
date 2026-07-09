#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int a ;
        cin>>a ;
        string s ;
        cin>>s ;
        int count= 0 ;
        for(auto ele : s){
            if(ele == '(') count++ ;
            else count-- ;
        }
        if(count) cout<<"NO"<<endl ;
        else cout<<"YES"<<endl ;
    }
}