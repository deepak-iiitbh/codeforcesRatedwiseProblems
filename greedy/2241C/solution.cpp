#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin>>t ;
	while(t--){
	    int x ;
	    cin>>x ;
	    string s;
	    cin>>s ;
	    char pointer = s[0] ;
	    string temp ;
	    for(int i=1 ;i<x ;i++){
	        while(s[i]==pointer){
	            i++ ;
	            continue ;
	        }
	        temp+=pointer ;
	        pointer = s[i] ;
	    }
	    if(s[x-1]!=s[x-2]) temp+=s[x-1] ;
	    //cout<<temp<<endl ;
	    if(temp.size()==2) cout<<"2"<<endl ;
	    else cout<<"1"<<endl ;
	}

}
