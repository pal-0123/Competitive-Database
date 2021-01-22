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
    	int n,m;
    	cin >> n >> m;
    	string s[n];
    	for(int i=0;i<n;i++){
    		cin >> s[i];
    	}
    	int ans=0;
    	for(int j=0;j<m-1;j++){
    		if(s[n-1][j]!='R'){
    			ans++;
    		}
    	}
    	for(int i=0;i<n-1;i++){
    		if(s[i][m-1]!='D'){
    			ans++;
    		}
    	}
    	cout << ans << endl;
    }

	return 0;
}