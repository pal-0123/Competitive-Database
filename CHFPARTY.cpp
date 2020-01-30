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
    int n;
    int i;
    while (t--){
    	cin >> n;
    	int a[n];
    	int ans=0;
    	for (i=0;i<n;i++){
    		cin >> a[i];
    	}
    	sort(a,a+n);
    	for (i=0;i<n;i++){
    		if (a[i]<ans+1){
    			ans++;
    		}
    	}
    	cout << ans << "\n";
    }
	
	
	return 0;
}