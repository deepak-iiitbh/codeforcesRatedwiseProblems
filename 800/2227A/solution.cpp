# include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int a , b ;
        cin>>a>>b ;
        a = a%2 ;
        b = b%2 ;
        if(a==1 && b==1) cout<<"NO"<<endl ;
        else cout<<"YES"<<endl ;
    }
}