#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v(a);
    for (int i = 0; i < a; i++) cin >> v[i];

    sort(v.begin(), v.end());

   

    for (int i = 0; i < a; i++) {
        int extra = 0 ;
        if (v[i] > b) break;

        int diff = b - v[i];

        if (c >= diff) {
            extra += diff;
            c -= diff;
        } else {
            extra += c;
            c = 0;
            
        }

        b =  b+ v[i] + extra ;
    }

    cout << b  << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}