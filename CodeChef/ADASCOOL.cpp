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
	int n,m;
	while (t--){
		cin >> n >> m;
		if (n%2==0 || m%2==0){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	

	return 0;
}