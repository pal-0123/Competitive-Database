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

	int q;
	cin >> q;

	while (q--){
		int n;
		cin >> n;
		int ans=0;
		while (n!=1){
			if (n%2==0){
				ans++;
				n=n/2;
			}
			else if (n%3==0){
				n=n/3;
				ans+=2;
			}
			else if (n%5==0){
				n=n/5;
				ans+=3;
			}
			else {
				break;
			}
		}
		if (n==1){
			cout << ans << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}