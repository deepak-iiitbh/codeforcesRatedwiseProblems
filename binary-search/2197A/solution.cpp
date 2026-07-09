#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int main(){
    ll a ;
    cin>>a ;
    while(a--){
       ll x ;
       cin>>x ;
       ll count = 0;
       for(ll i =x ;i<= x+100 ;i++){
        ll helper = i ;
        ll sum = 0 ;
        while(helper){
            sum += helper%10 ;
            helper /=10 ;
        }
        if(i-sum ==x){
            count++ ;
        }
       }
       cout<<count<<endl ;
    }
}