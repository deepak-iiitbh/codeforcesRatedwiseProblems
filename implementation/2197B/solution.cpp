#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n), a(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> blocks;
    if (n > 0) {
        blocks.push_back(a[0]);
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                blocks.push_back(a[i]);
            }
        }
    }

    int it = 0;
    for (int i = 0; i < n && it < blocks.size(); i++) {
        if (p[i] == blocks[it]) {
            it++;
        }
    }

    if (it == blocks.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}