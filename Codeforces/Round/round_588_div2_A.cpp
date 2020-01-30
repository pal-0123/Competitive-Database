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

	int a1,a2,a3,a4;
	cin >> a1 >> a2 >> a3 >> a4;
	if(a1+a2==a3+a4 || a1+a3==a2+a4 || a1+a4==a2+a3){
		cout << "YES\n";
	}
	else if(a1==a2+a3+a4 || a2==a3+a1+a4 || a3==a1+a2+a4 || a4==a1+a2+a3){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	
	return 0;
}