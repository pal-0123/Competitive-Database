#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif


	int n,m;
	cin >> n >> m;
	int i,j;
	int c[n];
	int km[m];
	for (i=0;i<n;i++){
		cin >> c[i];
	}
	for (i=0;i<m;i++){
		cin >> km[i];
	}
	int ans=0;
	if (n==m){

		for (i=0;i<n;i++){
			ans+=c[i]*km[i];
		}
		cout << ans << "\n";
	}
	else {
		int temp=0;
		for (i=0;i<n-m+1;i++){
			temp=0;
			for (j=0;j<m;j++){
				temp+=c[i+j]*km[j];
			}
			if (temp>ans){
				ans=temp;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}