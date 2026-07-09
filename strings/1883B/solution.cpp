#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    int odd = 0;
    for (auto &p : freq) {
        if (p.second & 1) odd++;
    }

    // Minimum removals needed
    int needed = max(0, odd - 1);

    if (k >= needed)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
