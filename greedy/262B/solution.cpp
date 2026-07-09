#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int a, b;
    cin >> a >> b;

    vector<int> v(a);
    for (int i = 0; i < a; i++) cin >> v[i];

    sort(v.begin(), v.end());

   
    for (int i = 0; i < a && b > 0; i++) {
        if (v[i] < 0) {
            v[i] *= -1;
            b--;
        }
    }

  
    sort(v.begin(), v.end());

    
    if (b % 2 == 1) {
        v[0] *= -1;
    }

    int sum = 0;
    for (int x : v) sum += x;

    cout << sum << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    while(tc--) solve();
}