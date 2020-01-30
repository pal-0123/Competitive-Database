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
    	int n,k;
    	cin >> n >> k;
    	n/=k;
    	if (n%k==0){
    		cout << "NO\n";
    	}
    	else{
    		cout << "YES\n";
    	}
    }
	
	return 0;
}