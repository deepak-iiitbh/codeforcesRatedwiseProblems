#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
    while(t--){
        string s ;
        cin>>s ;
        int n = s.size() ;
        int count1 = 0 ;
        int count2 = 0 ;
        for(int i=0 ;i<n-1 ;i++){
            if(s[i]=='a' && s[i+1]=='b') count1++ ;
            else if(s[i]=='b' && s[i+1]=='a') count2++ ;
        }
       // cout<<count1<<" "<<count2<<endl ;
        if(count1==count2) cout<<s<<endl ;
        else{
            if(s[0]=='a'){
                s[0]='b';
            }
            else{
                s[0]='a';
            }
            cout<<s<<"\n";
        }
    }

}
