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
		int n,b;
		cin >> n >> b;
		int area=-1;
		int i;
		int w,h,p;
		for (i=0;i<n;i++){
			cin >> w >> h >> p;
			if (p<=b){
				if (w*h>area){
					area=w*h;
				}
			}
		}
		if (area==-1){
			cout << "no tablet\n";
		}
		else{
			cout << area << "\n";
		}

	}
	
	return 0;
}