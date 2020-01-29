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
		int hr,mm;
		cin >> hr >> mm;
		int ans;
		ans=(24-hr-1)*60;
		ans+=(60-mm);
		cout << ans << endl;
	}

	return 0;
}