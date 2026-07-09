#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int a , b ;
    cin >> a >> b ;
    
    vector<int> v(a);
    for(int i = 0; i < a; i++) cin >> v[i];
    sort(v.begin() , v.end()) ;
    map<int , int> mp;
    
    int count = 1;
    for(int i = 1; i < a; i++){
        if(v[i-1] == v[i]){
            count++;
        } else {
            if(count >= b){
                mp[v[i-1]] = count;
            }
            count = 1;
        }
    }
    if(count >= b){
        mp[v[a-1]] = count;
    }

    if(mp.size() == 0){
        cout << "-1\n";
        return;
    }

    vector<int> cal;
    for(auto x : mp){
        cal.push_back(x.first);
    }

    int i = 0, j = 1;
    int first = cal[0], second = cal[0];
    int maxsize = 1;
    int cont = 1;

    while(j < cal.size()){
        if(cal[j] == cal[j-1] + 1){
            cont++;
        } else {
            if(cont > maxsize){
                maxsize = cont;
                first = cal[i];
                second = cal[j-1];
            }
            cont = 1;
            i = j;
        }
        j++;
    }

    
    if(cont > maxsize){
        first = cal[i];
        second = cal[j-1];
    }

    cout << first << " " << second << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) solve();
}