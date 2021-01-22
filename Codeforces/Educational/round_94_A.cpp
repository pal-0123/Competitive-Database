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
		string s;
		cin >> s;
		string base="";
		for(int i=0;i<n;i++){
			base+=s[i];
		}
		for(int i=1;i<n;i++){
			for(int j=i;j<i+n;j++){
				if(base[j-i]!=s[j]){
					base[j-i]='.';
				}
			}
		}
		for(int i=0;i<n;i++){
			if(base[i]=='.'){
				base[i]='0';
			}
		}
		cout << base << endl;
	}

	return 0;
}