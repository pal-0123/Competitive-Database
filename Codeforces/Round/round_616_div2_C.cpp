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
 		int n,m,k;
 		cin >> n >> m >> k;
 		for(int i=0;i<n;i++){
 			cin >> a[i];
 		}
 		int unkn=m-1-k;
 		if(unkn<0){
 			unkn=0;
 		}
 		int lmax[n];
 		int rmax[n];
 		lmax[0]=a[0];
 		for(int i=1;i<n;i++){
 			lmax[i]=max(lmax[i-1],a[i]);
 		}
 		rmax[n-1]=a[n-1];
 		for(int i=n-2;i>=0;i--){
 			rmax[i]=max(lmax[i],rmax[i+1]);
 		}
 		
 	}

	return 0;
}