#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long a, b, n;
        std::cin >> a >> b >> n;
        
        long long k = a / b;
        
        if (n <= k || a == b) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 2 << std::endl;
        }
    }
    return 0;
}