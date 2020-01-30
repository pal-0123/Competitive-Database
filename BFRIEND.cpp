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
 		int n,a,b,c;
 		cin >> n >> a >> b >> c;
 		int f[n];
 		int ans;
 		cin >> f[0];
 		ans=(abs(f[0]-b)+c+abs(f[0]-a));
 		for(int i=1;i<n;i++){
 			cin >> f[i];
 			int temp;
 			temp=(abs(f[i]-b)+c+abs(f[i]-a));
 			if(temp<ans){
 				ans=temp;
 			}
 		}
 		cout << ans << endl;
 		

 	} 

	return 0;
}