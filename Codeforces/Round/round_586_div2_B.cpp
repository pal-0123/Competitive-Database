#include <bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b) { 
    if (b == 0){
		return a; 
    }
    return gcd(b, a % b);  
      
} 

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	int gc[n];
	for(i=0;i<n;i++){
		int ai=-1;
		for(j=0;j<n;j++){
			if(i!=j){
				if(ai==-1){
					ai=a[i][j];
				}
				else{
					ai=gcd(ai,a[i][j]);
				}
			}
		}
		gc[i]=ai;
		// for(j=0;j<n;j++){
		// 	a[j][i]/=ai;
		// }

		cout << ai << " ";
	}
	cout <<endl;
	
	return 0;
}