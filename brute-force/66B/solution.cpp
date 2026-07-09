#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> v(a);
    for(int i = 0; i < a; i++) cin >> v[i];

    vector<int> left(a, 0);
    vector<int> right(a, 0);

   
    for(int i = 0; i < a; i++){
        int tar = v[i];
        int count = 0;
        for(int j = i; j >= 0; j--){  
            if(v[j] <= tar){
                count++;
                tar = v[j];
            }
            else break ;
        }
        left[i] = count;
    }


    for(int i = 0; i < a; i++){
        int tar = v[i];
        int count = 0;
        for(int j = i + 1; j < a; j++){
            if(v[j] <= tar){
                count++;
                tar = v[j];
            }
            else break ;
        }
        right[i] = count;
    }

    int ans = 0;
    for(int i = 0; i < a; i++){
        ans = max(ans, left[i] + right[i]);
    }
    // for(auto x : left) cout<<x<<" " ;
    // cout<<endl ;
    // for(auto x: right) cout<<x<<" " ;
    // cout<<endl ;     
    cout << ans << endl;

    return 0;
}