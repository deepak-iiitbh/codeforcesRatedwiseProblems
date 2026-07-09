#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        std::vector < char > ans;
        while (b > 0) {
            int putting = (int) std::ceil((double) r / (b + 1));
            for (int i = 0; i < putting; i++) {
                ans.push_back('R');
            }
            b -= 1;
            ans.push_back('B');
            r -= putting;
        }
        if (r > 0) {
            for (int i = 0; i < r; i++) ans.push_back('R');
        }
        for (int i = 0; i < ans.size(); i++) cout << ans[i];
        cout << endl;
    }

}