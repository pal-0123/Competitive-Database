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

  	int n,m;
  	cin >> n >> m;
  	string s[n],t[m];
  	for(int i=0;i<n;i++){
  		cin >> s[i];
  	}
  	for(int i=0;i<m;i++){
  		cin >> t[i];
  	}
  	int q;
  	cin >> q;
  	while(q--){
  		int y;
  		cin >> y;
  		y--;
  		cout << s[y%n]+t[y%m] << endl;
  	}

	return 0;
}