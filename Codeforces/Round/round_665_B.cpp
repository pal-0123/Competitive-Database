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
		int x1,y1,z1,x2,y2,z2;
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;
		if(z1-min(z1,y2)+x1>=z2){
			cout << 2*min(z1,y2) << endl;
		}
		else{
			z2-=x1;
			x1=0;
			int temp=min(z2,z1);
			z2-=temp;
			z1-=temp;
			cout << 2*min(z1,y2)-2*min(z2,y1) << endl;
		}
	}

	return 0;
}