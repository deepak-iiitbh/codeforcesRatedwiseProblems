#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    vector<pair<int,int>> v;
    int ans = 0;

    for (int i = 0; i < a; i++) {
        int x, y;
        cin >> x >> y;

        if (x >= y) {
            ans += y;
        } else {
            v.push_back({x, y});
        }
    }

    vector<tuple<int,int,int>> temp;

    for (auto &p : v) {
        int x = p.first, y = p.second;
        int gain = min(2*x, y) - min(x, y);
        temp.push_back({gain, x, y});
    }

    sort(temp.rbegin(), temp.rend());

    for (int i = 0; i < temp.size(); i++) {
        int gain = get<0>(temp[i]);
        int x = get<1>(temp[i]);
        int y = get<2>(temp[i]);

        if (i < b) {
            x *= 2;
        }

        ans += min(x, y);
    }

    cout << ans << endl;

    return 0;
}