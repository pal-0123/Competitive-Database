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
	while(t--){
		cin >> n;
		string s;
		char x;
		cin >> s >> x;
		int i;
		int ans=0;
		int last=-1;
		for(i=0;i<n;i++){
			if(s[i]==x){
				ans+=(n-i)*(i-last);
				last=i;
			}
			//cout << ans << endl;
		}
		cout << ans << endl;
	}

	
	return 0;
}