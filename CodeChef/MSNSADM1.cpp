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
	while (t--){
		int n;
		cin >> n;
		int a[n],b[n];
		int i;
		for (i=0;i<n;i++){
			cin >> a[i];
		}
		for (i=0;i<n;i++){
			cin >> b[i];
		}
		int max;
		max=a[0]*20-b[0]*10;
		if (max<0){
			max=0;
		}
		for (i=1;i<n;i++){
			if (max<a[i]*20-b[i]*10){
				max=a[i]*20-b[i]*10;
			}
		}
		cout << max << endl;
	}

	return 0;
}