#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0" << endl;
            continue;
        }

        long long k, x;
        if (a > b) {
            k = a / b;
            x = a % b;
        } else {
            k = b / a;
            x = b % a;
        }

        if (x != 0 || (k & (k - 1)) != 0) {
            cout << "-1" << endl;
        } else {
            long long count = 0;
            while (k > 1) {
                if (k % 8 == 0) {
                    k /= 8;
                    count++;
                } else if (k % 4 == 0) {
                    k /= 4;
                    count++;
                } else if (k % 2 == 0) {
                    k /= 2;
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}
