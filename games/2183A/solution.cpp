#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
     cin>>t ;
     while(t--){
         int a ;
         cin>>a ;
         vector<int> v(a) ;
         for(int i=0 ;i<a ;i++){
             cin>>v[i] ;
         }
         if(v[0]==0 && v[a-1]==0) cout<<"Bob"<<endl ;
         else cout<<"Alice"<<endl ;
         
     }
}