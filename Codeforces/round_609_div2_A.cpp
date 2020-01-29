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

    int n;
    cin >> n;
    if(n==1){
    	cout << "9 8\n";
    }
    else{
    	cout << 3*n << " " << 2*n << endl;	
    }

    


	return 0;
}