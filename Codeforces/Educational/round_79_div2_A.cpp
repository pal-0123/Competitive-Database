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
		int r,g,b;
		cin >> r >> g >> b;
		if(r>g){
			int temp=r;
			r=g;
			g=temp;
		}
		if(r>b){
			int temp=r;
			r=b;
			b=temp;	
		}
		if(g>b){
			int temp=b;
			b=g;
			g=temp;
		}
		if(b<=(r+g+1)){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}

	return 0;
}