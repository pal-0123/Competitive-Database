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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cntl=0,cntr=0;
    for(int i=0;i<n;i++){
    	if(s[i]=='L'){
    		cntl++;
    	}
    	else{
    		cntr++;
    	}
    }
    cout << cntr+cntl+1 << endl;

	return 0;
}