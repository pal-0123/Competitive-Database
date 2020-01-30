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
    int n,k,v;
    while (t--){
    	cin >> n >> k >> v;
    	int a[n];
    	int i;
    	int sum=0;
    	for (i=0;i<n;i++){
    		cin >> a[i];
    		sum+=a[i];
    	}
    	int ans=(v*(n+k)-sum);
    	if (ans%k==0 && ans>0){
    		ans=ans/k;
    		cout << ans << "\n";
    	}
    	else{
    		cout << "-1\n";
    	}
    }
	
	
	return 0;
}