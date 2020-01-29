#include <bits/stdc++.h>
using namespace std;
#define int long long int

int bin(int x,int d,int n){
	int cur;
	cur=x+(int)ceil((1.0*d)/(x+1));
	if(cur<=n){
		// cout << x << cur;
		return 1;
	}
	if(x>=n-1){
		return -1;
	}
	return bin(x+(n-x)/2,d,n);
}

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
 		int n,d;
 		cin >> n >> d;
 		int ans=bin(0,d,n);
 		if(ans==1){
 			cout << "YES\n";
 		}
 		else{
 			cout << "NO\n";
 		}
 	} 

	return 0;
}