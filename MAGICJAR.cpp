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
    while (t--){
    	int n;
    	cin >> n;
    	int a[n];
    	int i;
    	long long int ans=0;
    	for (i=0;i<n;i++){
    		cin >> a[i];
    		ans+=a[i]-1;
    	}
    	ans++;
    	cout << ans << "\n";

    }
    
	
	return 0;
}