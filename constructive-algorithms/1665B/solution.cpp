#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--) {
        long long a;
        cin >> a;

        map<long long, long long> mp;
        for (long long i = 0; i < a; i++) {
            long long x;
            cin >> x;
            mp[x]++;
        }

        long long maxcount = 0;
        for (auto &x : mp) {
            maxcount = max(maxcount, x.second);
        }

        if (a == 1 || maxcount == a) {
            cout << 0 << '\n';
        } else {
            long long ans = 0;
            long long remaing = a - maxcount;
            long long changable = maxcount;

            while (remaing > 0) {
                ans++;  // operation
                long long take = min(changable, remaing);
                ans += take;
                remaing -= take;
                changable += take;
            }

            cout << ans << '\n';
        }
    }

    return 0;
}
