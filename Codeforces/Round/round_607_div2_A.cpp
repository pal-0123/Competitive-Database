#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	int l=s.length();
    	if(s[l-1]=='o'){
    		cout << "FILIPINO\n";
    	}
    	else if(s[l-1]=='u'){
    		cout << "JAPANESE\n";
    	}
    	else{
    		cout << "KOREAN\n";
    	}
    }

	return 0;
}