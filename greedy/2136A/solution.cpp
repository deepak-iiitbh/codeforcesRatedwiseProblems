#include <bits/stdc++.h>
using namespace std;

bool possible(int x, int y) {
    int mx = max(x, y), mn = min(x, y);
    return mx <= 2 * mn + 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int firstR = a, firstK = b;
        int secondR = c - a, secondK = d - b;

        if (possible(firstR, firstK) && possible(secondR, secondK))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
