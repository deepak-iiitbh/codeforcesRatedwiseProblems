#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int a , b;
    cin >> a >> b;

    deque<int> dp;
    for(int i = 0; i < a; i++) {
        int x;
        cin >> x;
        dp.push_back(x);
    }

    vector<int> color(b);
    for(int i = 0; i < b; i++) cin >> color[i];

    

    for(int i = 0; i < b; i++) {
        
        auto it = find(dp.begin(), dp.end(), color[i]);
        int idx = it - dp.begin();

        cout<<idx+1<<" " ;

        int val = *it;
        dp.erase(it);
        dp.push_front(val);
    }

    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    
    while(tc--) solve();
}