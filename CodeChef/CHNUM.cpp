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
	int n;
	int i;
	int negative_count,positive_count;
	cin >> t;
	while (t--){
		cin >> n;
		negative_count=0;
		positive_count=0;
		int a[n];
		for (i=0;i<n;i++){
			cin >> a[i];
			if (a[i]<0){
				negative_count++;
			}
			else{
				positive_count++;
			}
		}
		if (negative_count==0 || positive_count==0){
			cout << n << " " << n << "\n";
		}
		else if (negative_count>positive_count){
			cout << negative_count << " " << positive_count << "\n";
		}
		else{
			cout << positive_count << " " << negative_count << "\n";
		}


	}	
	
	return 0;
}