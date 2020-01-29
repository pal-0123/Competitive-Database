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

    int n,l,r;
    cin >> n >> l >> r;
    int min,max;
    min=(int)pow(2,l)-1;
    min+=(n-l);

    max=(int)pow(2,r)-1;
    max+=(n-r)*(int)(pow(2,r-1));

   	cout << min << " " << max <<endl;
	
	return 0;
}