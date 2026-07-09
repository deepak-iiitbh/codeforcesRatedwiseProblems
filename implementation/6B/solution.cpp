#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    char c;
    cin >> n >> m >> c;

    vector<vector<char>> v(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    set<char> s;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == c){

                if(i-1 >= 0 && v[i-1][j] != '.' && v[i-1][j] != c)
                    s.insert(v[i-1][j]);

                if(i+1 < n && v[i+1][j] != '.' && v[i+1][j] != c)
                    s.insert(v[i+1][j]);

                if(j-1 >= 0 && v[i][j-1] != '.' && v[i][j-1] != c)
                    s.insert(v[i][j-1]);

                if(j+1 < m && v[i][j+1] != '.' && v[i][j+1] != c)
                    s.insert(v[i][j+1]);
            }
        }
    }

    cout << s.size() << endl;
    return 0;
}