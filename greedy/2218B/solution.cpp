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
    vector<int> v(7);
    for(int i = 0; i < 7; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for(int i = 0; i < 6; i++) {
        v[i] *= -1;
    }

    int total = accumulate(v.begin(), v.end(), 0LL);

    cout << total << endl;
}

    return 0;
}