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
		int k1,k2;
		cin >> k1 >> k2;
		int win=-1;
		for(int i=0;i<k1;i++){
			int temp;
			cin >> temp;
			if(temp==n){
				win=1;
			}
		}  		
		for(int i=0;i<k2;i++){
			int temp;
			cin >> temp;
			if(temp==n){
				win=2;
			}
		}
		if(win==1){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
  	}

	return 0;
}