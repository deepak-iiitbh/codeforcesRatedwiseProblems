#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        string s1;
        cin >> s1;
        int b;
        cin >> b;
        string s2 , s3;
        cin >> s2>>s3;
        

        for (int i = 0; i < s2.size(); i++) {
            if (s3[i]=='V') {
                s1.insert(s1.begin(), s2[i]);  // add at front
            } else {
                s1.push_back(s2[i]);           // add at back
            }
        }

        for (char x : s1) {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
