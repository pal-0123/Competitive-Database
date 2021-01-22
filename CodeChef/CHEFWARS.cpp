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
		int h,p;
		cin >> h >> p;
		// int mx=0;
		// while(p>0){
		// 	int temp=(floor(log(p)/log(2)));
		// 	mx+=pow(2,temp+1)-1;
		// 	p-=pow(2,temp);
		// }
		// if(mx>=h){
		// 	cout << "1\n";
		// }
		// else{
		// 	cout << "0\n";
		// }

		while(p){
			h-=p;
			p/=2;
		}
		if(h<=0){
			cout << "1\n";
		}
		else{
			cout << "0\n";
		}
	}
	
	return 0;
}