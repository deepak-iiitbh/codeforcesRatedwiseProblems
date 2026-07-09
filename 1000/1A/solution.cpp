#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int rows = (a + c - 1) / c;
    int cols = (b + c - 1) / c;

    cout << rows * cols << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    
    while(tc--) solve();
}