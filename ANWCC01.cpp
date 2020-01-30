#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif


	int t;
	cin >> t;
	int n;
	int ans=0,temp;
	while (t--){
		cin >> n;
		ans=1;
		while ((n+1)/2!=1){
			ans++;
			n=(n+1)/2;
		}

		cout << ans << "\n";
	}

	return 0;
}