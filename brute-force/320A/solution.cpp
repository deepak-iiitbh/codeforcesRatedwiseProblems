#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    cin >> s;
    int n = s.size(); 
    bool checker = false;
    int count = 0;

   
    if (s[0] != '1') {
        checker = true;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] != '1' && s[i] != '4') {
            checker = true;
            break;
        }

        if (s[i] == '1') {
            count = 0; 
        } else {
            count++;
            if (count > 2) {
                checker = true;
                break;
            }
        }
    }

    
    if (checker) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
