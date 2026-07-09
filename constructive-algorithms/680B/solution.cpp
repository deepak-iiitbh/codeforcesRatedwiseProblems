#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a , b ;
    cin>>a>>b ;
    vector<int> v(a) ;
    --b ;
    for(int i=0 ;i<a ;i++) cin>>v[i] ;
    int dist = 1 ;
    int count = 0 ;
    if(v[b]) count++ ;
   while(true){
    int left = b - dist;
    int right = b + dist;

    if(left < 0 && right >= a) break;

    else if(left >= 0 && right < a && v[left] == 1 && v[right] == 1){
        count += 2;
    }
    else if(left < 0 && right < a && v[right] == 1) count++;
    else if(right >= a && left >= 0 && v[left] == 1) count++;

    dist++;
}
    
    cout<<count<<endl ;
    return 0;
}