#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(a) ;
        for(int i=0 ; i<a ;i++)  cin>>v[i] ;
        int mini = min(b, c);
        int maxi = max(b, c);

        int small = 0, mid = 0;

        for (int i = 0; i < a; i++) {
            
        
            if (v[i] <= mini)
                small++;
        }
        
        for (int i = 0; i < a; i++) {
            
        
            if (v[i] > mini && v[i]<=maxi)
              mid++ ;
        }
        int temp = min(small , mid) ;
        if(temp==small) cout<<temp<<endl ;
        else cout<< temp + (small-mid)/2 <<endl ;
    }

    return 0;
}
