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

    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
    	cin >> s;
    	if(s[0]=='0'){
    		cout << "0\n";
    	}
    	else{
    		int j=0;
    		while(j<s.length() && s[j]=='1'){
    			j++;
    		}
    		int ans=0;
    		while(j<s.length() && s[j]=='0'){
    			ans++;
    			j++;
    		}
    		cout << ans << endl;
    	}
    }

	return 0;
}