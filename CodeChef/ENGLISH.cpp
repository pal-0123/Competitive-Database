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
  		string w[n],wr[n];
  		for(int i=0;i<n;i++){
  			cin >> w[i];
  			wr[i]=w[i];
  			reverse(wr[i].begin(),wr[i].end());
  		}
  		sort(w,w+n);
  		sort(wr,wr+n);
  		int ansp=0,anss=0;
  		
  	}

	return 0;
}