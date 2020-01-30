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
    int a[n];
    for (int i=0;i<n;i++){
    	cin >> a[i];
    }
    sort(a,a+n);
    int i;
    for (i=n-1;i>0;i--){
    	if (a[i]!=a[i-1]){
    		i--;
    		break;
    	}
    }
    cout << a[i]%a[n-1];

	
	return 0;
}