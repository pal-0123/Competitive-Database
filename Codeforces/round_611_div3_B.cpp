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

	int q;
	cin >> q;
	while(q--){
		int n,k;
		cin >> n >> k;
		int z=n/k;
		n-=z*k;
		cout << z*k + min(k/2,n) << endl;
	}

	return 0;
}