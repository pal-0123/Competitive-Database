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
		int n;
		cin >> n;
		if((n-1)%14==0 && (n-1)>0){
			cout << "YES\n";
		}
		else if((n-2)%14==0 && (n-2)>0){
			cout << "YES\n";
		}
		else if((n-3)%14==0 && (n-3)>0){
			cout << "YES\n";
		}
		else if((n-4)%14==0 && (n-4)>0){
			cout << "YES\n";
		}
		else if((n-5)%14==0 && (n-5)>0){
			cout << "YES\n";
		}
		else if((n-6)%14==0 && (n-6)>0){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}    

	return 0;
}