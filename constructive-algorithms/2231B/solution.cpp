#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> p;
    int L = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            p.push_back(i);
            L = max(L, a[i] - a[i+1]);
        }
    }

    if (p.empty()) {
        cout << "YES" << endl;
        return;
    }

    for (int x = 0; x < (int)p.size() - 1; x++) {
        int px = p[x];
        int px1 = p[x+1];
        int R = -1;
        for (int j = px + 1; j < px1; j++) {
            R = max(R, a[j+1] - a[j]);
        }
        if (R < L) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}