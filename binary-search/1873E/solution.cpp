#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        vector<int> v(a);
        for(int i = 0; i < a; i++) cin >> v[i];

        int i = 0, j = INT_MAX;
        int ans = 0;

        while(i <= j) {
            int mid = i + (j - i) / 2;

            long long count = 0;
            for(int x = 0; x < a; x++) {
                if(mid > v[x]) {
                    count += (mid - v[x]);
                }
            }

            if(count <= b) {
                ans = mid;      
                i = mid + 1;    
            } else {
                j = mid - 1;
            }
        }

        cout << ans << endl;
    }
}