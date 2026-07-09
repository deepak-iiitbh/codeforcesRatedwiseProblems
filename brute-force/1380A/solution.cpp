#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }

        bool found = false;
        int x = -1, y = -1, z = -1;

        for (int i = 1; i < a - 1; i++) {
            if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
                x = i;     
                y = i + 1;
                z = i + 2;
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
            cout << x << " " << y << " " << z << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
