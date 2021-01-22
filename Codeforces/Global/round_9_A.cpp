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
    	int n;
    	cin >> n;
    	int a[n];
    	for(int i=0;i<n;i++){
    		cin >> a[i];
    	}
    	

    	for(int i=0;i<n;i++){
    		cout << a[i] << " ";
    	}
    	cout << endl;
    }

	return 0;
}