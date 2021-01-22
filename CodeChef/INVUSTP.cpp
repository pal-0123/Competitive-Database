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

	int n,q;
	cin >> n >> q;
	int p[n];
	set<int> st;
	
	int inv[n];
	int sm[n];
	inv[0]=0;
	sm[0]=inv[0];
	for(int i=0;i<n;i++){
		cin >> p[i];

		
	}
	
	while(q--){
		int l,r;
		cin >> l >> r;
		if(l==1){
			cout << sm[r-1] << endl;
		}
		else{
			cout << sm[r-1]-sm[l-2] << endl;
		}
	}    

	return 0;
}