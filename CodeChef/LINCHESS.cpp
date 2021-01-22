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
		int n,k;
		cin >> n >> k;
		int p[n];
		int mn=INT_MAX;
		int ans=-1;
		for(int i=0;i<n;i++){
			cin >> p[i];
			if(k%p[i]==0 && k/p[i]<mn){
				ans=p[i];
				mn=k/p[i];
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}