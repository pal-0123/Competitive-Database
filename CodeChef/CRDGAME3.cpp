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
    	int pc,pr;
    	cin >> pc >> pr;
    	pc+=8;
    	pr+=8;
    	int dc,dr;
    	dc=pc/9;
    	dr=pr/9;
    	if(dc<dr){
    		cout << 0 << " " << dc << endl;
    	}
    	else{
    		cout << 1 << " " << dr << endl;
    	}
    }

	return 0;
}