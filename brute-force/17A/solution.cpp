#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b ;
    cin >> a >> b ;

    vector<int> v(a+1 , true);
    v[0] = v[1] = false;

    for(int i=2 ; i*i<=a ; i++){
        if(v[i]){
            for(int j=i*i ; j<=a ; j+=i){
                v[j] = false;
            }
        }
    }

    vector<int> prime;
    for(int i=2 ; i<=a ; i++){
        if(v[i]) prime.push_back(i);
    }

    int count = 0;

    for(int i=0 ; i<prime.size() ; i++){

        int target = prime[i] - 1;

        int sum = 0;
        int x = 0;

        for(int y=0 ; y<prime.size() ; y++){

            sum += prime[y];

            while(sum > target && x<=y-1){
                sum -= prime[x];
                x++;
            }

            if(sum == target && x+1==y){
                count++;
                break;
            }
        }
    }

    if(count < b) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
