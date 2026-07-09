#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        vector<long long> v(a);
        long long sum = 0;
        for (int i = 0; i < a; i++) {
            cin >> v[i];
            sum += v[i];
        }

        // prefix sum: pref[i] = sum of v[0..i-1]
        vector<long long> pref(a + 1, 0);
        for (int i = 1; i <= a; i++) {
            pref[i] = pref[i - 1] + v[i - 1];
        }

        while (b--) {
            long long x, y, z;
            cin >> x >> y >> z;

            long long segSum = pref[y] - pref[x - 1];      // sum of v[x-1..y-1]
            long long len = y - x + 1;
            long long temp = sum + len * z - segSum;       // new total sum

            if (temp & 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
