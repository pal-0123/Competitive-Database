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
  		int min=INT_MAX,minpos=-1,max=-1,maxpos=-1;
  		for(int i=0;i<n;i++){
  			cin >> a[i];
  		}
  		int i;
  		for(i=0;i<n-1;i++){
  			if(abs(a[i]-a[i+1])>1){
  				break;
  			}
  		}
  		if(i==n-1){
  			cout << "NO\n";
  		}
  		else{
  			cout << "YES\n";
  			cout << i+1 << " " << i+2 << endl;
  		}


  	}

	return 0;
}