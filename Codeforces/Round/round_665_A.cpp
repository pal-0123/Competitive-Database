#include <bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

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
    	if(k<=n){
    		if(n%2==k%2){
    			cout << 0 << endl;
    		}
    		else{
    			cout << 1 << endl;
    		}
    	}
    	else{
    		cout << k-n << endl;
    	}
    }	

	return 0;
}