#include <bits/stdc++.h>
using namespace std;

#define int long long

// generate primes using sieve
vector<int> get_primes(int n) {
    int limit = 200000;
    vector<bool> is_prime(limit, true);
    vector<int> primes;

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < limit && primes.size() < n + 5; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j < limit; j += i)
                is_prime[j] = false;
        }
    }
    return primes;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> primes = get_primes(10000);

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << primes[i] * primes[i + 1] << " ";
        }
        cout << '\n';
    }
}