 #include <bits/stdc++.h>
 using namespace std;
 
 #define endl '\n'
 #define int long long
 
 const int MOD = 1e9 + 7;
 const int INF = LLONG_MAX >> 1;
 
 signed main() {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
 
     int a ;
     cin>>a ;
     vector<int> v(a) ;
     for(int i=0 ;i<a ;i++) cin>>v[i] ;
     vector<int> pref(a+1) ;
     pref[0] = 0 ;
     for(int i=0 ;i<a ;i++){
        pref[i+1] = pref[i]+v[i] ;
     }
     vector<int> sorted(a+1) ;
     sort(v.begin(), v.end()) ;
     sorted[0] = 0 ;
     for(int i=0 ;i<a ;i++){
        sorted[i+1] = sorted[i]+v[i] ;
     }
     int t ;
     cin>>t ;
     while(t--){
        int x ;
        cin>>x ;
        int p , q ;
        if(x==1){
            
            cin>>p>>q ;
            cout<<pref[q]-pref[p-1]<<endl ;
        }
        else {
            cin>>p>>q ;
            cout<<sorted[q]-sorted[p-1]<<endl ;
        }
     }
 
     return 0;
 }