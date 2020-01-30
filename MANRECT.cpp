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
		int x1y1,x1_yu,y1_xu;
		cout << "Q 0 0\n" << flush;
		cin >> x1y1;
		int n=1000000000;
		cout << "Q 0 " << n << "\n" << flush;
		cin >> x1_yu;
		x1_yu-=n;
		cout << "Q " << n << " 0\n" << flush;
		cin >> y1_xu;
		y1_xu-=n;
		int x1xu;
		x1xu=x1y1-y1_xu;
		cout << "Q " << x1xu/2 << " 0\n" <<flush;
		int x1,y1,xu,yu;
		cin >> y1;
		x1=x1y1-y1;
		yu=x1-x1_yu;
		xu=x1xu-x1;
		cout << "A " << x1 << " " << y1 << " " << xu << " " << yu <<"\n" << flush;
		int verdict;
		cin >> verdict;
	}


	return 0;
}