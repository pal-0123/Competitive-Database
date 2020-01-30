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
    while (t--){
    	int n,m;
    	cin >> n >> m;
    	int k;
    	cin >> k;
    	vector <pair <int,int> > plnt;
    	int i;
    	for (i=0;i<k;i++){
    		int r,c;
    		cin >> r >> c;
    		plnt.push_back({r,c});
    	}
    	// cout << plnt[0].first;
    	sort(plnt.begin(),plnt.end());
    	
    }
	
	
	return 0;
}