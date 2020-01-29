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
		int n,p,k;
		cin >> n >> p >> k;
		vector<int> a;
		for(int i=0;i<n;i++){
			int temp;
			cin >> temp;
			a.push_back(temp);
		}
		sort(a.begin(),a.end());
		
	}
	return 0;
}