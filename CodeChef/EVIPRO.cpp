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
    	string s;
    	cin >> s;
    	int ans=0;
    	for(int i=0;i<s.length()-1;i++){
    		if(s[i]==s[i+1]){
    			int n=s.length()-i-2;
    			ans+=(n*(n+1))/2;
    			// cout << ans;
    			ans+=(i*(i+1))/2;
    			// cout << ans;
    			ans+=i+n+1;
    			// cout << ans;
    			ans+=n*i;
    			// if(i!=0){
    			// 	// cout << ans;
    			// 	ans++;
    			// }
    			// ans++;
    		}
    		else{
    			ans+=s.length();
    		}
    		// cout << ans << endl;
    	}

    	cout << ans << endl;
    }

	return 0;
}