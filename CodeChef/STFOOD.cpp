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
  		int s[n],p[n],v[n];
  		cin >> s[0] >> p[0] >> v[0];
  		int ans=p[0]/(s[0]+1);
  		ans*=v[0];
  		for(int i=1;i<n;i++){
  			cin >> s[i] >> p[i] >> v[i];
  			int temp;
  			temp=p[i]/(s[i]+1);
  			temp*=v[i];
  			if(temp>ans){
  				ans=temp;
  			}
  		}
  		cout << ans << endl;
  	}

	return 0;
}