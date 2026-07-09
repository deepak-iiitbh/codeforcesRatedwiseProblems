#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        long long n, k;
        std::cin >> n >> k;

        long long target_divisor = k + 1;

        for (int i = 0; i < n; ++i) {
            long long a;
            std::cin >> a;
            long long p = a % target_divisor;
            long long x = a + p * k;
            std::cout << x<< (i == n - 1 ? "" : " ");
        }
        std::cout << "\n";
    }

    return 0;
}