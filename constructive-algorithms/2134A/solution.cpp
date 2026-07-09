#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

      if ((n % 2 == b % 2) && (a <= b || n % 2 == a % 2)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }
    return 0;
}
