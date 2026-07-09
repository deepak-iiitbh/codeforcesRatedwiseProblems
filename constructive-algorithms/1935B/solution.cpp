#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--) {
        int a ;
        cin>>a ;
        vector<int> mex(a+1 , 0) ;
        vector<int> v(a) ;
        for(int i=0 ;i<a ;i++){
            cin>>v[i] ;
            mex[v[i]] = 1 ;
        }
        int pointer = 0 ;
        while(mex[pointer]) ++pointer ;
        if(pointer >= a) {
            cout<<"-1"<<endl ;
        }
        else {
            vector<int> realmex(a+1 , 0) ;
            bool condition = false ;
            int secpointer = 0 ;
            int target = -1 ;
            for(int i=0 ;i<a ;i++){
                realmex[v[i]] = 1 ;
                while(realmex[secpointer]) {
                    ++ secpointer ;
                }
                if(secpointer == pointer){
                    condition = true ;
                    target = i ;
                    break ;
                }
            }
            if(condition == false ) cout<<"-1"<<endl ;
            else {
                vector<int> cc(a+1 , 0) ;
                bool secondition = false ;
                int pp = 0 ;
                for(int i=target+1 ;i<a ;i++){
                    cc[v[i]] = 1 ;
                    while(cc[pp]) ++pp ;
                    if(pp == pointer){
                        secondition = true ;
                        break ;
                    }
                }
                if(secondition  == false ) cout<<"-1"<<endl ;
                else {
                    cout<<"2"<<endl ;
                    cout<<"1"<<" "<<target+1<<endl ; ;
                    cout<<target+2<<" "<<a<<endl ;
                }
            }
        }
    }

    return 0;
}