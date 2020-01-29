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
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int i;
		int rem[3]={0,0,0};
		for(i=0;i<n;i++){
			cin >> a[i];
			rem[a[i]%3]++;
		}
		int ans=rem[0];
		if(rem[1]>rem[2]){
			ans+=rem[2];
			rem[1]-=rem[2];
			ans+=rem[1]/3;
		}
		else{
			ans+=rem[1];
			rem[2]-=rem[1];
			ans+=2*(rem[2]/3);
		}
		cout << ans << endl;

	}	

	return 0;
}