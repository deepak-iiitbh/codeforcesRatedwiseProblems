#include <bits/stdc++.h>
using namespace std;

long long nearestPowerOf3(long long a) {
    long long p = 1;
    while (p * 3 <= a) {
        p *= 3;
    }
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        long long ans = 0;

        while (a >= 3) {
            long long nearest = nearestPowerOf3(a);
            int exponent = 0;
            long long temp = 1;
            while (temp < nearest) {
                temp *= 3;
                exponent++;
            }

            if (exponent > 1) {
                ans += (long long)pow(3, exponent + 1) + exponent * (long long)pow(3, exponent - 1);
            } else {
                ans += 10;
            }

            a -= nearest;
        }

        if (a) {
            ans += 3 * a;
        }

        cout << ans << "\n";
    }
    return 0;
}
