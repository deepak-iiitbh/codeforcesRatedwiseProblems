#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> freq;

    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            cnt++;
        else {
            freq.push_back(cnt);
            cnt = 1;
        }
    }
    freq.push_back(cnt);

    sort(freq.begin(), freq.end());

    int blocks = freq.size();

    vector<int> val(blocks + 1);
    for (int i = 1; i <= blocks; i++)
        val[i] = freq[i - 1];

    vector<int> suf(blocks + 2, 0);
    for (int i = blocks; i >= 1; i--)
        suf[i] = suf[i + 1] + val[i];

    int ans = 0;

    for (int keep = 1; keep <= blocks; keep++) {

        int left = val[blocks - keep];
        int right = val[blocks - keep + 1];

        if (left == right)
            continue;

        int sum = suf[blocks - keep + 1];

        int need = k - sum;

        if (need % keep != 0)
            continue;

        int add = need / keep;

        if (right + add > 0)
            ans++;
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}