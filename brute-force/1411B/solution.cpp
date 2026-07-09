#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isFair(ll x) {
    ll t = x;
    while (t > 0) {
        int d = t % 10;
        t /= 10;
        if (d != 0) {
            if (x % d != 0) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll x = n;
        while (true) {
            if (isFair(x)) {
                cout << x << "\n";
                break;
            }
            x++;
        }
    }

    return 0;
}
